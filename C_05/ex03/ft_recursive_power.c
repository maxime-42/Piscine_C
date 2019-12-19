/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 23:01:38 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/05 15:19:22 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	r;

	r = 0;
	if (!power)
		return (1);
	if (power >= 1)
		return (r = ft_recursive_power(nb, power - 1) * nb);
	return (r);
}
