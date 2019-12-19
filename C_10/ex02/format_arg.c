/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_arg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 11:23:21 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/11 11:23:54 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void		ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void		args_format(char *name, char *str, int valid, int bol)
{
	if (bol == 1)
		ft_putstr(str);
	else
	{
		if (valid > 1)
			ft_putstr("\n");
		ft_putstr("==> ");
		ft_putstr(name);
		ft_putstr(" <==\n");
		ft_putstr(str);
	}
}
