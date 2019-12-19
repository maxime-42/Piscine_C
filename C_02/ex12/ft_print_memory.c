/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 13:31:35 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/12 21:39:50 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void					ft_putnbr_base(long nbr, char *base, int i)
{
	unsigned long long	length;
	unsigned long long	n;
	unsigned int		j;

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
	if (i > 0)
		ft_putnbr_base(n / length, base, i - 1);
	write(1, &base[n % length], 1);
}

void					ft_putstr_non_printable(unsigned char *p, int size)
{
	int					i;

	i = 0;
	while (i < 16 && size > 0)
	{
		if (p[i] < 32 || p[i] > 126)
		{
			write(1, ".", 1);
		}
		else
			write(1, &p[i], 1);
		size--;
		i++;
	}
}

void					ft_print_hex(unsigned char *p, int size)
{
	char				*hex;
	unsigned char		tmp;
	int					count;

	count = 0;
	hex = "0123456789abcdef";
	while (count < 16 && size > 0)
	{
		tmp = p[count] / 16;
		write(1, &hex[tmp], 1);
		tmp = p[count] % 16;
		write(1, &hex[tmp], 1);
		if (count % 2 == 1)
			write(1, " ", 1);
		size--;
		count++;
	}
	if (count != 16)
	{
		write(1, "   ", 3);
		if ((count % 2 == 0))
			write(1, "  ", 2);
	}
}

void					*ft_print_memory(void *addr, unsigned int size)
{
	char				*p;
	unsigned int		i;
	char				*base;
	unsigned long long	addr_decimal;

	if (!size)
		return (0);
	i = 0;
	base = "0123456789abcdef";
	p = (char *)addr;
	while (i < size)
	{
		addr_decimal = (unsigned long long)p;
		ft_putnbr_base(addr_decimal, base, 15);
		write(1, ": ", 2);
		ft_print_hex((unsigned char *)p, size - i);
		ft_putstr_non_printable((unsigned char *)p, size - i);
		write(1, "\n", 1);
		i += 16;
		p += 16;
	}
	return (addr);
}
