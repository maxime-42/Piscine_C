/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 22:44:52 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/13 11:07:54 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putstr_non_printable(char *str)
{
	char				*hex;
	unsigned	char	*p;
	unsigned	char	tmp;

	p = (unsigned char *)str;
	hex = "0123456789abcdef";
	while (*p)
	{
		if (*p >= ' ' && *p <= '~')
			write(1, p, 1);
		else
		{
			write(1, "\\", 1);
			tmp = *p / 16;
			write(1, &hex[tmp], 1);
			tmp = *p % 16;
			write(1, &hex[tmp], 1);
		}
		p++;
	}
}
