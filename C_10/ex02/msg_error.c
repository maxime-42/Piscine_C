/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msg_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 11:24:27 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/11 13:44:00 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_errputstr(char *str)
{
	while (*str)
		write(2, str++, 1);
}

void	display_error(char *bin, char *file)
{
	ft_errputstr(basename(bin));
	ft_errputstr(": ");
	ft_errputstr(file);
	ft_errputstr(": ");
	ft_errputstr(strerror(errno));
	ft_errputstr("\n");
}

int		display_error2(char *bin, char *arg)
{
	ft_errputstr(basename(bin));
	ft_errputstr(": illegal offset -- ");
	ft_errputstr(arg);
	ft_errputstr("\n");
	return (0);
}

void	display_error3(char *bin)
{
	ft_errputstr(basename(bin));
	ft_errputstr(": option requires an argument -- c");
	ft_errputstr("\n");
}
