/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 11:21:28 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/11 11:57:54 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>
# include <libgen.h>
# include <stdlib.h>
# define BUFSIZE 100

int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strjoin(char *s1, char *s2);
void	args_format(char *name, char *str, int valid, int bol);
void	display_error(char *bin, char *file);
int		display_error2(char *bin, char *arg);
void	display_error3(char *bin);
char	*ft_read_file(char *str, int fd);
void	multi_file(int ac, char **av, int bytes);
#endif
