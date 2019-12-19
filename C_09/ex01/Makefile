#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/09 11:45:34 by mkayumba          #+#    #+#              #
#    Updated: 2019/09/09 11:45:36 by mkayumba         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

RM	= rm -f

CFLAGS = -Wall -Wextra -Werror

PATH_SRCS = ./srcs/

HEADER = ./includes

SRCS	=	./srcs/ft_putchar.c\
			./srcs/ft_swap.c\
			./srcs/ft_putstr.c\
			./srcs/ft_strlen.c\
			./srcs/ft_strcmp.c\

OBJ = ${SRCS:.c=.o}

all: $(NAME)

.c.o :
	gcc -c $(CFLAGS) -I $(HEADER) $< -o $(<:.c=.o)

$(NAME) : ${OBJ}
		  ar rc $(NAME) $(OBJ)
clean:
	$(RM) ${OBJ}

fclean: clean
		$(RM) $(NAME)

re : fclean all