/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbuffard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 20:25:42 by cbuffard          #+#    #+#             */
/*   Updated: 2019/09/09 18:55:07 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	init_case(int tab[][SIZE_TAB])
{
	int	i;
	int	j;

	i = 0;
	while (++i <= SIZE)
	{
		j = 0;
		while (++j <= SIZE)
			tab[i][j] = 0;
	}
}

void	fill_tab(int tab[][SIZE_TAB], char *s2)
{
	int	j;

	j = -1;
	tab[0][0] = 0;
	tab[0][1] = s2[++j] - '0';
	tab[0][2] = s2[++j] - '0';
	tab[0][3] = s2[++j] - '0';
	tab[0][4] = s2[++j] - '0';
	tab[0][5] = 0;
	tab[SIZE + 1][0] = 0;
	tab[SIZE + 1][1] = s2[++j] - '0';
	tab[SIZE + 1][2] = s2[++j] - '0';
	tab[SIZE + 1][3] = s2[++j] - '0';
	tab[SIZE + 1][4] = s2[++j] - '0';
	tab[SIZE + 1][5] = 0;
	tab[1][0] = s2[++j] - '0';
	tab[2][0] = s2[++j] - '0';
	tab[3][0] = s2[++j] - '0';
	tab[4][0] = s2[++j] - '0';
	tab[1][SIZE + 1] = s2[++j] - '0';
	tab[2][SIZE + 1] = s2[++j] - '0';
	tab[3][SIZE + 1] = s2[++j] - '0';
	tab[4][SIZE + 1] = s2[++j] - '0';
	init_case(tab);
}
