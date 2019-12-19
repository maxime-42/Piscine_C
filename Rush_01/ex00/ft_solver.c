/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 20:17:14 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/08 20:17:16 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_print(int tab[][SIZE_TAB])
{
	int	i;
	int	j;
	int	nb;

	i = 0;
	nb = 0;
	while (++i <= SIZE + 0)
	{
		j = 0;
		while (++j <= SIZE)
		{
			nb = tab[i][j] + '0';
			write(1, &nb, 1);
			if (j < SIZE)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}

int		ft_check_nb(int tab[][SIZE_TAB], int i, int j, int nb)
{
	int	top;
	int	right;
	int	left;
	int	bottom;

	left = 0;
	top = 0;
	while (++left <= SIZE)
		CHECK_VALID((tab[i][left] == nb) ? 0 : 1);
	while (++top <= SIZE)
		CHECK_VALID((tab[top][j] == nb) ? 0 : 1);
	top = 0;
	tab[i][j] = nb;
	left = left_to_right(tab, i, j);
	right = right_to_left(tab, i, j);
	top = top_to_bottom(tab, i, j);
	bottom = bottom_to_top(tab, i, j);
	return ((left && right && bottom && top));
}

int		ft_solver(int tab[][SIZE_TAB], int i, int j)
{
	int	nb;

	nb = 0;
	j = (j > SIZE && (i += 1)) ? 1 : j;
	if (i > SIZE)
		return (1);
	while (++nb <= SIZE)
	{
		if (ft_check_nb(tab, i, j, nb))
		{
			if (ft_solver(tab, i, j + 1))
				return (1);
			else
				tab[i][j] = 0;
		}
	}
	return (0);
}
