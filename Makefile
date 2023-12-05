NAME		= push_swap

LIBFT_PATH	= libft
LIBFT		= $(LIBFT_PATH)/libft.a

SRC			= push_swap.c   \
			  sort_lower.c  \
			  sort.c        \
			  stack.c       \
			  operations1.c \
			  operations2.c \
			  load1.c       \
			  load2.c       \
			  close.c

CC			= cc
RM			= rm -f
FLAGS		= -Wall -Wextra -Werror
LIBS		= -L./$(LIBFT_PATH) -lft


all:		$(NAME)

$(LIBFT):
			@make -C $(LIBFT_PATH)

$(NAME):	$(LIBFT)
			$(CC) $(FLAGS) $(SRC) -o $(NAME) $(LIBS)

clean:
			@make clean -C $(LIBFT_PATH)

fclean:		clean
			$(RM) $(NAME)
			$(RM) $(LIBFT)

re:		fclean all

.PHONY:	all clean fclean re
