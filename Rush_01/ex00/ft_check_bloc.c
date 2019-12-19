/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_bloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 20:17:46 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/08 20:17:47 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	left_to_right(int tab[][SIZE_TAB], int i, int j)
{
	int	nb_bloc;
	int	max;
	int	x;

	x = 0;
	max = 0;
	nb_bloc = 0;
	while (++x <= SIZE)
	{
		if (tab[i][x] == 0)
			return (1);
		if (tab[i][x] > max)
		{
			max = tab[i][x];
			++nb_bloc;
		}
	}
	tab[i][j] = (tab[i][0] != nb_bloc) ? 0 : tab[i][j];
	return (tab[i][j]);
}

int	right_to_left(int tab[][SIZE_TAB], int i, int j)
{
	int	nb_bloc;
	int	max;
	int	x;

	x = SIZE + 1;
	max = 0;
	nb_bloc = 0;
	while (--x)
	{
		if (tab[i][x] == 0)
			return (1);
		if (tab[i][x] > max)
		{
			++nb_bloc;
			max = tab[i][x];
		}
	}
	tab[i][j] = (tab[i][SIZE + 1] != nb_bloc) ? 0 : tab[i][j];
	return (tab[i][j]);
}

int	top_to_bottom(int tab[][SIZE_TAB], int i, int j)
{
	int	nb_bloc;
	int	max;
	int	y;

	y = 0;
	max = 0;
	nb_bloc = 0;
	while (++y <= SIZE)
	{
		if (tab[y][j] == 0)
			return (1);
		if (tab[y][j] > max)
		{
			++nb_bloc;
			max = tab[y][j];
		}
	}
	tab[i][j] = (tab[0][j] != nb_bloc) ? 0 : tab[i][j];
	return (tab[i][j]);
}

int	bottom_to_top(int tab[][SIZE_TAB], int i, int j)
{
	int	nb_bloc;
	int	max;
	int	y;

	y = SIZE + 1;
	max = 0;
	nb_bloc = 0;
	while (--y)
	{
		if (tab[y][j] == 0)
			return (1);
		if (tab[y][j] > max)
		{
			++nb_bloc;
			max = tab[y][j];
		}
	}
	tab[i][j] = (tab[SIZE + 1][j] != nb_bloc) ? 0 : tab[i][j];
	return (tab[i][j]);
}
