SRC	= push_swap.c sort_lower.c sort.c stack.c operations1.c operations2.c load1.c load2.c close.c

CC	= cc
FLAGS1	= -Wall -Wextra -Werror
FLAGS2	= -L./libft -lft
RM	= rm -f

NAME	= push_swap

LIBFT	= libft/libft.a

all:		$(NAME)

$(LIBFT):
		@make -C libft

$(NAME):	$(LIBFT)
		$(CC) $(FLAGS1) $(FLAGS2) $(SRC) -o $(NAME)

clean:
		@make clean -C libft

fclean:		clean
		$(RM) $(NAME)
		$(RM) $(LIBFT)

re:		fclean all

.PHONY:	all clean fclean re
