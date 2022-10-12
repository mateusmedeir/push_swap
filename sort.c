#include "push_swap.h"

int	ft_check_sort(t_stack *stack)
{
	struct s_dolst	*tmp;

	tmp = stack->top;
	while (tmp && tmp->next)
	{
		if (tmp->number > tmp->next->number)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	ft_sort(t_stack *a, t_stack *b)
{
	while (!ft_check_sort(a))
	{
		while (a->top)
		{
			if (a->top->next && a->top->number > a->top->next->number)
				ft_stack_op(a, b, 0);
			ft_stack_op(a, b, 3);
			if (b->top->next && b->top->number < b->top->next->number)
				ft_stack_op(a, b, 1);
		}
		while (b->top)
			ft_stack_op(a, b, 2);
	}
}
