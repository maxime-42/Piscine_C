CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

RM	= rm -f

NAME	= do-op

SRC	=	./main.c\
		./op.c\
		./ft_putnbr.c\
		./ft_strcmp.c\
		./ft_atoi.c\

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all