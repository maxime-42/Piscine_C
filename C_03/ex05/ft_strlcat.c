/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 00:32:32 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/04 17:46:52 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned	int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	slength;
	unsigned int	dlength;
	unsigned int	j;

	j = 0;
	dlength = 0;
	slength = ft_strlen(src);
	while (dest[dlength] && dlength < size)
		dlength++;
	if (size == 0)
		return (slength);
	if (size == dlength)
		return (slength + size);
	while (src[j] && (dlength + j) < (size - 1))
	{
		dest[dlength + j] = src[j];
		j++;
	}
	dest[dlength + j] = '\0';
	return (dlength + slength);
}
