/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 13:58:27 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/05 14:02:35 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	while (av[i])
	{
		write(1, av[i], ft_strlen(av[i]));
		write(1, "\n", 1);
		i++;
	}
	ac = 0;
	av = 0;
	return (0);
}
