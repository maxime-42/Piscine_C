/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 11:16:39 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/11 13:42:49 by mkayumba         ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		ft_atoi(char *str)
{
	int	n;
	int	s;

	n = 0;
	s = 1;
	while ((*str && *str >= 9 && *str <= 13) || *str == 32)
		str++;
	while ((*str && *str == '-') || *str == '+')
	{
		s *= (*str == '-') ? -1 : 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		n = (n * 10) + *str - 48;
		str++;
	}
	return (n * s);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(str = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	str[0] = '\0';
	ft_strcat(str, s1);
	ft_strcat(str, s2);
	return (str);
}
