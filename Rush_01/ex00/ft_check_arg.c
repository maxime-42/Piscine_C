/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ietmidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 20:01:50 by ietmidi           #+#    #+#             */
/*   Updated: 2019/09/10 15:22:34 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	str_without_space(char *s, char **s2)
{
	int	i;

	i = 0;
	CHECK_VALID((*s2 = malloc(sizeof(char) * (ft_strlen(s) + 1))));
	while (s[i])
		s2[0][i++] = '\0';
	s2[0][i] = '\0';
	i = 0;
	while (*s)
	{
		s2[0][i] = (*s != ' ') ? *s : s2[0][i];
		i += (*s != ' ');
		s++;
	}
	return (1);
}

int	ft_check_arg(char *s, char **s2)
{
	int	i;
	int	space;
	int	a;
	int	b;

	i = -1;
	space = 0;
	while (s[++i])
	{
		space += (s[i] == ' ');
		CHECK_VALID((s[i] != ' ' && !(s[i] >= '1' && s[i] <= '4')) ? 0 : 1);
	}
	CHECK_VALID((i != 31 || space != NB_ARG) ? 0 : 1);
	CHECK_VALID(str_without_space(s, s2));
	i = -1;
	while (++i < (SIZE * 3))
	{
		i = (i == SIZE) ? SIZE * 2 : i;
		a = (int)s2[0][i] - '0';
		b = (int)s2[0][i + SIZE] - '0';
		CHECK_INDICE(a, b);
	}
	return (1);
}
