/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ietmidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 19:49:03 by ietmidi           #+#    #+#             */
/*   Updated: 2019/09/10 15:21:53 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# define NB_ARG 15
# define SIZE 4
# define SIZE_TAB SIZE + 2
# define FT_ABS(x) (x < 0) ? x * -1 : x
# define CHECK_INDICE(a, b) if ((a + b) > 5 || (FT_ABS((a - b))) < 0) return (0)
# define CHECK_VALID(x) if (!x) return (0)
# include <unistd.h>
# include <stdlib.h>

int		ft_strlen(char *str);
int		ft_check_arg(char *s, char **s2);
void	ft_print(int tab[][SIZE_TAB]);
void	fill_tab(int tab[][SIZE_TAB], char *s2);
int		left_to_right(int tab[][SIZE_TAB], int i, int j);
int		right_to_left(int tab[][SIZE_TAB], int i, int j);
int		top_to_bottom(int tab[][SIZE_TAB], int i, int j);
int		bottom_to_top(int tab[][SIZE_TAB], int i, int j);
int		ft_check_nb(int tab[][SIZE_TAB], int i, int j, int nb);
int		ft_solver(int tab[][SIZE_TAB], int i, int j);

#endif
