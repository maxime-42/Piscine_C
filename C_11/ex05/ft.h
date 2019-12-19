/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 19:53:36 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/09 22:45:49 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

typedef struct	s_ptr_fct
{
	char		*op;
	void		(*ptr)(int, int);
}				t_ptr_fct;

void			ft_putnbr(int nb);
int				ft_strcmp(char *s1, char *s2);
int				ft_atoi(char *str);
void			addition(int a, int b);
void			multiplication(int a, int b);
void			division(int a, int b);
void			modulo(int a, int b);
void			substraction(int a, int b);
#endif
