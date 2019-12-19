/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 00:13:01 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/04 13:30:34 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i] && str[i] && to_find[i] == str[i])
		i++;
	if (to_find[i] && str[i] && to_find[i] != str[i])
		return (ft_strstr(str + 1, to_find));
	if (!to_find[i] && str[i])
		return (str);
	if (!to_find[i] && !str[i])
		return (str);
	return (0);
}
