/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 14:59:18 by ychair            #+#    #+#             */
/*   Updated: 2019/09/18 20:04:54 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int		several_file(int ac, char **av, int fd)
{
	int		i;
	t_info	info;

	i = 0;
	while (++i < ac)
	{
		if ((fd = open(av[i], O_RDONLY)) < 0)
			write(2, "Error\n", 6);
		else
		{
			if ((ft_get_info(&info, fd)))
			{
				if ((ft_get_map(&info, fd)))
					ft_solver(&info);
				if ((close(fd)) < 0)
					write(2, "map error\n", 10);
			}
			else
				write(2, "map error\n", 10);
		}
		if ((ac - i) > 1)
			write(1, "\n", 1);
	}
	return (0);
}

int		main(int ac, char **av)
{
	int		fd;
	t_info	info;

	fd = 0;
	if (!(ac - 1))
	{
		if ((ft_get_info(&info, fd)))
		{
			if (!(ft_get_map(&info, fd)))
				return (0);
			ft_solver(&info);
		}
		else
			write(2, "map error\n", 10);
	}
	several_file(ac, av, fd);
	return (0);
}
