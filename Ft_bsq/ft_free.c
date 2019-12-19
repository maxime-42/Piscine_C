/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 14:47:02 by ychair            #+#    #+#             */
/*   Updated: 2019/09/17 14:48:08 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int	ft_free_tab(t_info *info, int error)
{
	int		i;
	char	**tab;

	i = 0;
	tab = (char **)info->map;
	while (tab && tab[i])
	{
		free(tab[i]);
		tab[i] = 0;
		i++;
	}
	if (tab)
	{
		free(tab);
		tab = 0;
	}
	if (error)
		write(2, "map error\n", 10);
	return (0);
}

int	ft_free_str(char **p)
{
	if (p != NULL && *p)
	{
		free(*p);
		*p = 0;
	}
	return (0);
}
