/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_info.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 15:24:58 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/17 14:51:25 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

char	*ft_get_first_line(int fd)
{
	char	buf[2];
	char	*ptr;
	char	*tmp;
	int		r;

	r = 1;
	ptr = 0;
	while (r && (r = read(fd, &buf, 1)) > 0)
	{
		buf[r] = '\0';
		tmp = ft_strjoin(ptr, buf);
		r = (tmp[ft_strlen(tmp) - 1] != '\n');
		if (!r || ptr)
			ft_free_str(&ptr);
		ptr = tmp;
	}
	if (r < 0)
	{
		ft_free_str(&ptr);
		ptr = 0;
	}
	return (ptr);
}

int		ft_printable(char *s)
{
	int	i;

	i = ft_strlen(s);
	CHECK_VALID((s[--i] != '\n') ? 0 : 1);
	while (--i >= 0)
	{
		if (s[i] < 32)
		{
			return (0);
		}
	}
	return (1);
}

int		ft_search_info(t_info *info, char *s)
{
	int	nb;
	int	i;

	i = ft_strlen(s) - 1;
	CHECK_VALID(ft_printable(s));
	info->plein = s[--i];
	info->ob = s[--i];
	info->vide = s[--i];
	s[i] = '\0';
	while (--i >= 0)
		CHECK_VALID(((s[i] >= '0' && s[i] <= '9')));
	CHECK_VALID(((nb = ft_atoi(s)) <= 0) ? 0 : 1);
	info->nline = nb;
	info->ncol = 0;
	return (1);
}

int		ft_get_info(t_info *info, int fd)
{
	char	*s;

	s = 0;
	(*info).map = 0;
	if (!(s = ft_get_first_line(fd)) || (ft_strlen(s) - 1) < 4)
	{
		ft_free_str(&s);
		return (0);
	}
	if (!(ft_search_info(info, s)))
	{
		ft_free_str(&s);
		return (0);
	}
	if (s != 0)
		free(s);
	s = 0;
	if (info->plein == info->ob ||
			info->plein == info->vide || info->vide == info->ob)
		return (0);
	return (1);
}
