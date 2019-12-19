/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:08:05 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/09 22:42:09 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	j;
	int	n;

	i = -1;
	n = 1;
	while (n && ++i < length)
	{
		j = i;
		while (n && ++j < length)
			n = ((f(tab[i], tab[j])) <= 0) ? n : 0;
	}
	if (n)
		return (n);
	++n;
	i = -1;
	while (n && ++i < length)
	{
		j = i;
		while (n && ++j < length)
			n = ((f(tab[i], tab[j])) >= 0) ? n : 0;
	}
	return ((n > 0));
}
