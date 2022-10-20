SRC	= push_swap.c sort_lower.c sort.c stack.c operations1.c operations2.c load1.c load2.c error.c

CC	= cc
FLAGS1	= -Wall -Wextra -Werror
FLAGS2	= -L./libft -lft
RM	= rm -f

NAME	= push_swap

LIBFT	= libft/libft.a

all:	$(LIBFT) $(NAME)

$(LIBFT):
	@make -C libft

$(NAME):
	$(CC) $(FLAGS1) $(FLAGS2) $(SRC) -o $(NAME)

fclean:
	$(RM) $(NAME)
	@make fclean -C libft

re:	fclean all

.PHONY:	all fclean re
