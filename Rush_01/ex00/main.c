/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ietmidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 20:06:20 by ietmidi           #+#    #+#             */
/*   Updated: 2019/09/08 20:07:24 by ietmidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int ac, char **av)
{
	int		tab[SIZE_TAB][SIZE_TAB];
	char	*s2;

	s2 = 0;
	tab[0][0] = 0;
	if (ac == 2 && ft_check_arg(av[1], &s2))
	{
		fill_tab(tab, s2);
		ft_solver(tab, 1, 1);
		ft_print(tab);
	}
	else
		write(1, "Error\n", 6);
	if (s2)
		free(s2);
	return (0);
}
