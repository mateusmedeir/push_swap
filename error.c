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
