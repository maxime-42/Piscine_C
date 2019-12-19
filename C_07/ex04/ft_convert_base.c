/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 22:04:17 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/07 23:29:42 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_check(char *base);
int		ft_atoi_base(char *str, char *base);

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_itoa(int nb, char *base)
{
	int		length;
	int		s;
	int		r;
	char	*str;

	length = 1;
	s = (nb < 0);
	nb = (nb < 0) ? nb * -1 : nb;
	r = nb;
	while (r >= ft_strlen(base) && ++length)
		r = r / ft_strlen(base);
	if (!(str = malloc(sizeof(char) * (length + s + 1))))
		return (0);
	str[0] = (s && ++length) ? '-' : str[0];
	str[length] = '\0';
	while (nb >= ft_strlen(base))
	{
		str[--length] = base[(nb % ft_strlen(base))];
		nb = nb / ft_strlen(base);
	}
	str[--length] = base[(nb % ft_strlen(base))];
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*str;

	nb = 0;
	str = 0;
	if (!(ft_check(base_from)) || !(ft_check(base_to)))
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	if (!(str = ft_itoa(nb, base_to)))
		return (str);
	return (str);
}
