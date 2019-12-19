/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 23:31:00 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/05 16:25:06 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int				sqrt;
	unsigned int	count;
	unsigned int	r;

	r = 1;
	sqrt = 1;
	count = 3;
	if (nb < 0)
		return (0);
	while (r < (unsigned int)nb)
	{
		r += count;
		count += 2;
		sqrt++;
	}
	return (r == (unsigned int)nb ? sqrt : 0);
}
