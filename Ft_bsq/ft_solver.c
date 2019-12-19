/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 14:54:53 by ychair            #+#    #+#             */
/*   Updated: 2019/09/17 14:56:19 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

void	display(t_info *info)
{
	int		i;
	char	**tab;

	i = 0;
	tab = (char **)info->map;
	while (tab[i])
	{
		write(1, tab[i], info->ncol);
		i++;
	}
	ft_free_tab(info, 0);
}

void	draw_sq(t_info *info)
{
	char	**tab;
	int		i;
	int		j;
	int		x;

	i = 0;
	tab = (char **)info->map;
	if (info->sq_size > -1 && tab)
	{
		while (i < info->sq_size)
		{
			j = 0;
			x = info->x;
			while (j < info->sq_size)
			{
				tab[info->y][x] = info->plein;
				j++;
				x++;
			}
			info->y++;
			i++;
		}
	}
}

int		ft_diagonal(t_info *t, char **tab, int i, int j)
{
	int	tmp;
	int	size;
	int	init_i;
	int	init_j;

	size = 0;
	init_i = i;
	init_j = j;
	while (tab[i] && tab[i][j] == t->vide)
	{
		tmp = i;
		while (tmp >= init_i)
			CHECK_VALID((tab[tmp--][j] == t->ob) ? 0 : 1);
		tmp = j;
		while (tmp >= init_j)
			CHECK_VALID((tab[i][tmp--] == t->ob) ? 0 : 1);
		if ((++size) > t->sq_size)
		{
			t->sq_size = size;
			t->x = init_j;
			t->y = init_i;
		}
		tmp = (++i && ++j);
	}
	return (0);
}

void	ft_solver(t_info *info)
{
	int		i;
	int		j;
	char	**tab;

	i = -1;
	info->y = -1;
	info->x = -1;
	info->sq_size = -1;
	tab = (char **)info->map;
	while (tab[++i])
	{
		j = -1;
		while (tab[i][++j])
		{
			if (tab[i][j] == info->vide)
			{
				ft_diagonal(info, tab, i, j);
			}
		}
	}
	draw_sq(info);
	display(info);
}
