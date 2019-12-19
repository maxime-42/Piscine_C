/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:32:37 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/18 19:37:01 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*next_tmp;

	while (begin_list)
	{
		free_fct(begin_list->data);
		next_tmp = begin_list->next;
		free(begin_list);
		begin_list = next_tmp;
	}
}
