/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 20:02:58 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/11 17:54:26 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check(char *base)
{
	int	length;
	int n;
	int j;

	n = 0;
	length = -1;
	while (base[++length])
	{
		if (base[length] < 32)
			return (0);
		if (base[length] == '+' || base[length] == '-')
			return (0);
		j = length;
		while (base[++j])
			if (base[length] == base[j])
				return (0);
	}
	if (length <= 1)
		return (0);
	return (length);
}

int	ft_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	n;
	int	s;
	int	length;

	s = 1;
	n = 0;
	while ((*str && *str >= 9 && *str <= 13) || *str == 32)
		str++;
	while ((*str && *str == '-') || *str == '+')
	{
		s *= (*str == '-') ? -1 : 1;
		str++;
	}
	if ((length = ft_check(base)) <= 1)
		return (0);
	while (*str && ft_index(*str, base) >= 0)
	{
		n = (n * length) + ft_index(*str, base);
		str++;
	}
	return (n * s);
}

#include <libc.h>

int	main(int ac, char **av)
{
	int	n;

	n = ft_atoi_base(av[1], av[2]);
	printf("%d \n", n);
	ac = 0;
	av = 0;
	return (0);
}
