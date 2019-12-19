#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkayumba <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/17 16:05:07 by mkayumba          #+#    #+#              #
#    Updated: 2019/09/17 16:05:10 by mkayumba         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRCS		= 	./main.c\
				./ft_hexdump.c\
				 ./ft_str.c\

OBJS		= ${SRCS:.c=.o}

INCLUDES	= include

CC			= gcc
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror -I${INCLUDES}

EXE			= ft_hexdump

all:		${EXE}

${EXE}:		${OBJS}
			gcc ${CFLAGS} -o ${EXE} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${EXE}

.PHONY:		all clean fclean
