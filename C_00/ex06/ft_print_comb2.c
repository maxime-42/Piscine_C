/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 23:36:05 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/03 11:44:51 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_print2(int nb)
{
	unsigned	int	n;
	char			c;

	n = nb;
	n *= (nb < 0) ? -1 : 1;
	if (nb < 0)
		write(1, "-", 1);
	if (n >= 10)
		ft_print2(n / 10);
	c = (n % 10) + 48;
	write(1, &c, 1);
}

void		ft_print(int a, int b)
{
	if (a <= 9)
	{
		ft_print2(0);
		ft_print2(a);
		write(1, " ", 1);
	}
	if (b <= 9)
	{
		ft_print2(0);
		ft_print2(b);
	}
	if (a >= 10)
	{
		ft_print2(a);
		write(1, " ", 1);
	}
	if (b >= 10)
	{
		ft_print2(b);
	}
	if (a != 98)
		write(1, ", ", 2);
}

void		ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print(a, b);
			b++;
		}
		a++;
	}
}
