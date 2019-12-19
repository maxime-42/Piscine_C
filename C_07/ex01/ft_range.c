/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:32:57 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/05 19:23:51 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	i = 0;
	if (min >= max || !((p = malloc(sizeof(int) * (max - min)))))
		return (p = 0);
	while (min < max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
