/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 14:45:10 by ychair            #+#    #+#             */
/*   Updated: 2019/09/17 14:58:37 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_H
# define FT_BSQ_H

# define CHECK_VALID(x) if (!x) return (0)
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef struct		s_info
{
	void			*map;
	int				nline;
	int				ncol;
	char			vide;
	char			ob;
	char			plein;
	int				x;
	int				y;
	int				sq_size;
}					t_info;

int					ft_atoi(char *str);
char				*ft_strjoin(char *s1, char *s2);
int					ft_strlen(char *str);
int					ft_get_map(t_info *info, int fd);
int					ft_get_info(t_info *info, int fd);
char				*ft_get_first_line(int fd);
int					ft_free_tab(t_info *info, int error);
void				ft_solver(t_info *info);
void				draw_sq(t_info *info);
void				display(t_info *info);
int					ft_free_str(char **p);

#endif
