/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 21:53:49 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/04 21:59:05 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	r;

	r = 0;
	if (nb < 0)
		return (0);
	if (!nb)
		return (1);
	if (nb > 0)
		r = ft_recursive_factorial(nb - 1) * nb;
	return (r);
}
