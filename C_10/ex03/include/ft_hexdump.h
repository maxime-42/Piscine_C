/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:04:05 by mkayumba          #+#    #+#             */
/*   Updated: 2019/09/17 16:04:06 by mkayumba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEXDUMP_H
# define FT_HEXDUMP_H

typedef struct	s_buffer
{
	char	*previous;
	char	*current;
	int		bytes;
	int		total;
}				t_buffer;

int				write_hex(int size, int nbr);

int				write_chars_hex(char *buffer, int c_op, int bytes);

int				write_chars(char *buffer, int bytes);

void			clean_buffer(t_buffer *buffer);

void			display_buffer(t_buffer *buffer, int c_op);

#endif
