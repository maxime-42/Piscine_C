/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 18:23:51 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/04 21:23:37 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned	int	length;
	unsigned	int n;
	unsigned	int	j;

	length = 0;
	while (base[length])
	{
		if (base[length] < 32)
			return ;
		if (base[length] == '+' || base[length] == '-')
			return ;
		j = length;
		while (base[++j])
			if (base[length] == base[j])
				return ;
		length++;
	}
	if (length <= 1)
		return ;
	n = nbr;
	n = (nbr < 0) ? n * (write(1, "-", 1) * -1) : n;
	if (n >= length)
		ft_putnbr_base(n / length, base);
	write(1, &base[n % length], 1);
}
