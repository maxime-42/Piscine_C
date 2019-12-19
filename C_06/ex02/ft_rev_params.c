/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:05:26 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/05 14:07:57 by mkayumba         ###   ########.fr       */
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
	ac -= 1;
	while (ac)
	{
		write(1, av[ac], ft_strlen(av[ac]));
		write(1, "\n", 1);
		ac--;
	}
	av = 0;
	return (0);
}
