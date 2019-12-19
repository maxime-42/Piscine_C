CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

RM	= rm -f

NAME	= bsq

SRC	=	./main.c\
		./ft_get_info.c\
		./ft_get_map.c\
		./ft_atoi.c\
		./ft_strlen.c\
		./ft_strjoin.c\
		./ft_solver.c\
		./ft_free.c\

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all


