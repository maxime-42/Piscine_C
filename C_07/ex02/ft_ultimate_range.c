/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 19:10:33 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/05 19:23:18 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **p, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max || !((p[0] = malloc(sizeof(int) * (max - min)))))
	{
		p[0] = 0;
		return (0);
	}
	while (min < max)
	{
		p[0][i] = min;
		i++;
		min++;
	}
	return (i);
}
