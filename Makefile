SRC	= push_swap.c merge_sort.c

CC	= cc
FLAGS	= -Wall -Wextra -Werror
RM	= rm -f

NAME	= push_swap

all:	$(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all fclean re
