/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 11:09:48 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/11 11:59:15 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int				main(int ac, char **av)
{
	char		*str;
	int			bytes;

	if (ac > 2)
	{
		if ((bytes = ft_atoi(av[2])) == -1)
			return (display_error2(av[0], av[2]));
	}
	else if (ac == 2 && ft_strcmp(av[1], "-c") == 0)
		display_error3(av[0]);
	if (ac == 3)
	{
		str = (char *)malloc(sizeof(char) * BUFSIZE);
		if (!(str = ft_read_file(str, 0)))
			display_error(av[0], av[4]);
		if (bytes < ft_strlen(str))
			str += ft_strlen(str) - bytes;
		while (*str)
			write(1, str++, 1);
	}
	else if (ac > 3)
		multi_file(ac, av, bytes);
	return (0);
}
