/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 10:58:39 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/10 12:47:28 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <libc.h>

int			main(int ac, char **av)
{
	int		fd;
	char	buf;
	int		r;

	fd = 0;
	if (ac < 2)
		write(2, "File name missing.\n", 19);
	else if (ac > 2)
		write(2, "Too many arguments.\n", 20);
	if (ac != 2)
		return (0);
	if ((fd = open(av[1], O_RDONLY)) > 0)
	{
		while ((r = read(fd, &buf, 1)) != 0)
			write(1, &buf, 1);
		if ((close(fd)) == -1)
			write(2, "Cannot close file.\n", 18);
	}
	else
		write(2, "Cannot read file.\n", 18);
	return (0);
}
