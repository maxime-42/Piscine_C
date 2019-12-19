/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:17:52 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/19 19:47:00 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*tmp1;
	t_list	*tmp2;

	i = 0;
	tmp2 = 0;
	while (i < size)
	{
		tmp1 = ft_create_elem((void *)strs[i]);
		tmp1->next = tmp2;
		tmp2 = tmp1;
		i++;
	}
	return (tmp1);
}
