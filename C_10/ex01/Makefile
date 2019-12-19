#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/11 13:35:41 by mkayumba          #+#    #+#              #
#    Updated: 2019/09/11 13:35:46 by mkayumba         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

RM	= rm -f

NAME	= ft_cat

SRC	=	./main.c\

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all