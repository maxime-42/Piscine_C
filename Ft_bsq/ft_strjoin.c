/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 14:56:32 by ychair            #+#    #+#             */
/*   Updated: 2019/09/18 20:13:02 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*s3;
	int		size;
	int		i;
	int		j;

	i = 0;
	j = -1;
	size = (s1) ? ft_strlen(s1) : 0;
	size += (s2) ? ft_strlen(s2) : 0;
	if (!(s3 = malloc(sizeof(char) * (size + 1))))
		return (0);
	while (s1 && s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2 && s2[++j])
	{
		s3[i] = s2[j];
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
