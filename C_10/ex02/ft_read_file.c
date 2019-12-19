/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 11:38:54 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/11 13:40:59 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char		*ft_read_file(char *str, int fd)
{
	char	buf[BUFSIZE + 1];
	char	*ptr;
	int		ret;

	while ((ret = read(fd, buf, BUFSIZE)) > 0)
	{
		ptr = str;
		buf[ret] = '\0';
		str = ft_strjoin(str, buf);
		free(ptr);
	}
	return (str);
}

void		multi_file(int ac, char **av, int bytes)
{
	char	*str;
	int		valid;
	int		bol;
	int		fd;
	int		i;

	i = 3;
	valid = 0;
	bol = (ac == 4 ? 1 : 0);
	while (--ac > 2)
	{
		str = (char *)malloc(sizeof(char) * BUFSIZE);
		if ((fd = open(av[i], O_RDONLY, 0)) == -1)
		{
			display_error(av[0], av[i++]);
			continue ;
		}
		str = ft_read_file(str, fd);
		if (bytes < ft_strlen(str))
			str += ft_strlen(str) - bytes;
		valid += 1;
		args_format(av[i], str, valid, bol);
		i++;
	}
}
