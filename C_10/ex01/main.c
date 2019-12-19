/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 10:58:39 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/11 16:39:23 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <libgen.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	err_msg(char *name_program, char *name_file, char *msg_err)
{
	char *ptr;

	ptr = basename(name_program);
	write(2, ptr, ft_strlen(ptr));
	write(2, ": ", 2);
	write(2, name_file, ft_strlen(name_file));
	write(2, ": ", 2);
	write(2, msg_err, ft_strlen(msg_err));
	write(2, "\n", 1);
	return (1);
}

int	ft_read_stdin(void)
{
	char	buf;
	int		r;

	r = 0;
	while ((read(0, &buf, 1) != 0))
		r += write(1, &buf, 1);
	return (r);
}

int	main(int ac, char **av)
{
	int		fd;
	char	buf;
	int		r;
	int		i;

	i = 0;
	fd = 0;
	if (ac < 2 || av[1][0] == '-')
		return (ft_read_stdin());
	while (av[++i])
	{
		if ((fd = open(av[i], O_RDONLY)) != -1)
		{
			while ((r = read(fd, &buf, 1)) != 0)
				write(1, &buf, 1);
			if (r < 0)
				r = err_msg(av[0], av[i], strerror(errno));
			if ((close(fd)) == -1)
				r = err_msg(av[0], av[i], strerror(errno));
		}
		else if (fd == -1)
			r = err_msg(av[0], av[i], strerror(errno));
	}
	return (r);
}
