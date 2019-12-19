/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 23:51:09 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/09 14:06:18 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print(char **tab)
{
	int	i;
	int	j;

	i = 1;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			write(1, &tab[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		main(int ac, char **av)
{
	int		i;
	char	*tmp;

	i = 1;
	if (ac <= 1)
		return (0);
	while (av[i + 1])
	{
		if ((ft_strcmp(av[i], av[i + 1])) > 0)
		{
			tmp = av[i];
			av[i] = av[i + 1];
			av[i + 1] = tmp;
			i = 1;
		}
		else
			i++;
	}
	ft_print(av);
	ac = 0;
	av = 0;
	return (0);
}
