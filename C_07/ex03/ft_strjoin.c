/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 19:25:19 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/05 21:48:49 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **str, char *sep)
{
	char	*p;
	char	*p2;
	int		i;
	int		length;

	i = -1;
	length = ft_strlen(sep) * (size - 1);
	while (++i < size)
		length += ft_strlen(str[i]);
	if (!size)
		return ((p = malloc(sizeof(char) * (1))));
	else if (!(p = malloc(sizeof(char) * (length + 1))))
		return (0);
	i = -1;
	p2 = p;
	while (++i < size && ft_strcpy(p, str[i]))
	{
		p = p + ft_strlen(p);
		if (i + 1 < size)
		{
			ft_strcpy(p, sep);
			p = p + ft_strlen(p);
		}
	}
	return (p2);
}
