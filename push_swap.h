#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "libft/libft.h"

typedef struct s_dolst
{
	int		number;
	struct s_dolst	*next;
	struct s_dolst	*prev;
}				t_dolst;

typedef struct s_stack
{
	struct s_dolst	*top;
	struct s_dolst	*bottom;
}				t_stack;

//push_swap
void	ft_push_swap(int argc, char *argv[]);
//stack1
t_dolst	*ft_dolst_new(int number);
void	ft_stack_add(t_stack *stack, t_dolst *value);
t_stack	*ft_stack_new();
//stack2
int		ft_check_duplicated(t_stack *stack, t_dolst *value);
t_stack	*ft_load_stack(char *values[], int size);
#endif
