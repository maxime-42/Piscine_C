/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 14:51:36 by ychair            #+#    #+#             */
/*   Updated: 2019/09/17 14:54:43 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int		check_character(char *s, t_info *info)
{
	int	i;

	i = 0;
	while (s && s[i])
	{
		if (s[i] != '\n' && s[i] != info->vide && s[i] != info->ob)
		{
			return (0);
		}
		else if (s[i] == '\n' && s[i + 1] != '\0')
		{
			return (0);
		}
		i++;
	}
	return ((info->ncol != i) ? 0 : 1);
}

int		ft_init_tab(t_info *info, int fd)
{
	int		i;
	int		nb;
	char	*s;
	char	**tab;

	i = 0;
	nb = info->nline;
	CHECK_VALID((info->map = (void *)malloc(sizeof(char *) * (nb + 1))));
	tab = (char **)info->map;
	s = ft_get_first_line(fd);
	info->ncol = ft_strlen(s);
	tab[i] = s;
	tab[info->nline] = 0;
	if (!(check_character(tab[i], info)))
	{
		free(tab[i]);
		tab[i] = 0;
		return (ft_free_tab(info, 1));
	}
	return (1);
}

int		ft_get_map(t_info *info, int fd)
{
	char	**tab;
	char	buf;
	int		i;
	int		r;

	i = 0;
	CHECK_VALID((ft_init_tab(info, fd)));
	tab = (char **)info->map;
	while (++i < info->nline)
	{
		if (!(tab[i] = malloc(sizeof(char) * (info->ncol) + 1)))
		{
			tab[i] = 0;
			return (ft_free_tab(info, 0));
		}
		r = read(fd, tab[i], info->ncol);
		tab[i][(r < 0) ? 0 : r] = '\0';
		if (!(check_character(tab[i], info)))
		{
			free(tab[i]);
			tab[i] = 0;
			return (ft_free_tab(info, 1));
		}
	}
	return ((read(fd, &buf, 1) != 0) ? ft_free_tab(info, 1) : 1);
}
