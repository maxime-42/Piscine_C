#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/11 11:26:40 by mkayumba          #+#    #+#              #
#    Updated: 2019/09/11 12:58:36 by mkayumba         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRCS	=	./main.c \
			./msg_error.c\
			./format_arg.c\
			./ft_str.c\
			./ft_read_file.c\

OBJS	= ${SRCS:.c=.o}

NAME	= ft_tail

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o  ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all