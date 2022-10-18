#include "push_swap.h"

void	ft_clear_stack(t_stack *stack)
{
	struct s_dolst *tmp;

	while (stack->top)
	{
		tmp = stack->top->next;
		free(stack->top);
	}
	free(stack);
}

void	ft_error(void)
{
	ft_putstr_fd("ERROR\n", 2);
	exit(EXIT_FAILURE);
}

void	ft_clean_error(t_stack *a, t_stack *b)
{
	if (a)
		ft_clear_stack(a);
	if (b)
		ft_clear_stack(b);
	ft_error();
}
