/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 20:35:32 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/19 19:51:05 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
int (*cmp)(), void (*free_fct)(void *))
{
	int		count;
	t_list	*prev;
	t_list	*tmp;

	count = 0;
	prev = *begin_list;
	tmp = *begin_list;
	while (tmp)
	{
		if (!(*cmp)(tmp->data, data_ref))
		{
			prev->next = tmp->next;
			(*free_fct)(tmp->data);
			free(tmp);
		}
		if (count == 1)
			prev = prev->next;
		else
			count++;
		tmp = tmp->next;
	}
}
