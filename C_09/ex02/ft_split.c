/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 11:27:06 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/06 12:54:37 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_charset(char c, char *str)
{
	while (str && *str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

int		nb_word(char *s, char *str)
{
	int	line;

	line = 0;
	if (s && !*s)
		return (line);
	line += (!(is_charset(*s, str)));
	while (s && *s && !(is_charset(*s, str)))
		s++;
	while (s && *s && (is_charset(*s, str)))
		s++;
	if (s && *s)
		return (line += nb_word(s, str));
	return (line);
}

int		nb_char(char *s, char *str)
{
	int		i;

	i = 0;
	while (s && *s && (is_charset(s[i], str)))
		s++;
	while (s && s[i] && !(is_charset(s[i], str)))
		i++;
	return (i);
}

char	**ft_split(char *s, char *str)
{
	int		nb_w;
	int		i;
	int		j;
	char	**tab;

	i = -1;
	nb_w = nb_word(s, str);
	if (!(tab = malloc(sizeof(char *) * (nb_w + 1))))
		return (0);
	while (++i < nb_w)
	{
		while (*s && (is_charset(*s, str)))
			s++;
		if (*s && !(tab[i] = malloc(sizeof(char) * (nb_char(s, str) + 1))))
			return (0);
		j = 0;
		while (*s && !(is_charset(*s, str)))
		{
			tab[i][j++] = *s;
			s++;
		}
		tab[i][j] = '\0';
	}
	tab[i] = 0;
	return (tab);
}
