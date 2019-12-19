/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 17:27:25 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/19 19:39:25 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*p;

	if (!*begin_list)
		*begin_list = ft_create_elem(data);
	else
	{
		p = ft_create_elem(data);
		p->next = *begin_list;
		*begin_list = p;
	}
}
