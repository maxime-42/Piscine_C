/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 19:58:34 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/09 22:47:00 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>

static	t_ptr_fct	g_tab[] = {
	{"+", &addition},
	{"-", &substraction},
	{"*", &multiplication},
	{"/", &division},
	{"%", &modulo},
	{0, 0},
};

int	main(int ac, char **av)
{
	int	i;
	int	a;
	int	b;

	if (ac != 4)
		return (0);
	i = -1;
	a = ft_atoi(av[1]);
	b = ft_atoi(av[3]);
	while (g_tab[++i].op)
	{
		if (!(ft_strcmp(g_tab[i].op, av[2])))
		{
			g_tab[i].ptr(a, b);
			write(1, "\n", 1);
			return (0);
		}
	}
	write(1, "0\n", 2);
	return (0);
}
