/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 21:39:08 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/05 00:22:30 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	r;
	int	i;

	i = 1;
	r = 1;
	if (nb < 0)
		return (0);
	if (!nb)
		return (r);
	while (i <= nb)
	{
		r = r * i;
		i++;
	}
	return (r);
}
