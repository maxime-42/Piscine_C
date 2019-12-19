/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 20:41:03 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/04 15:01:24 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	str[j] = (str[j] >= 'a' && str[j] <= 'z') ? str[j] - 32 : str[j];
	j += (str[0] >= 'A' && str[0] <= 'Z');
	while (str[j] && i)
	{
		if (str[j] >= 'A' && str[j] <= 'Z')
			str[j] = str[j] + 32;
		else if (str[j] >= 'a' && str[j] <= 'z')
			;
		else if (str[j] >= '0' && str[j] <= '9')
			;
		else
			i = 0;
		j++;
	}
	if (str[j])
		ft_strcapitalize(str + j);
	return (str);
}
