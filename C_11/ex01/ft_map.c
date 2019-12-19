/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 12:34:57 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/09 22:41:16 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*p;

	i = -1;
	if (!(p = malloc(sizeof(int) * (length))))
		return (0);
	while (++i < length)
		p[i] = f(tab[i]);
	return (p);
}
