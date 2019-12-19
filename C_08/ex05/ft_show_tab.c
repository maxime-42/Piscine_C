/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 15:48:30 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/08 22:15:56 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned	int	n;
	char			c;

	n = nb;
	n *= (nb < 0) ? -1 : 1;
	if (nb < 0)
		write(1, "-", 1);
	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + 48;
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_show_tab(struct s_stock_str *tab)
{
	int	i;

	i = 0;
	while (tab[i].str)
	{
		ft_putstr(tab[i].str);
		write(1, "\n", 1);
		ft_putnbr(tab[i].size);
		write(1, "\n", 1);
		ft_putstr(tab[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
