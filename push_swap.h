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
//stack
t_dolst	*ft_dolst_new(int number);
t_stack	*ft_stack_new();
void	ft_stack_addtop(t_stack *stack, t_dolst *value);
void	ft_stack_addbottom(t_stack *stack, t_dolst *value);
void	ft_stack_to_stack(t_stack *from, t_stack *to);
//operations
void	ft_stack_s(t_stack *stack, char *str);
void	ft_stack_p(t_stack *from, t_stack *to, char *str);
//load
int		ft_check_duplicated(t_stack *stack, t_dolst *value);
t_stack	*ft_load_stack(char *values[], int size);
#endif
