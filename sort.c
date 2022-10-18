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
	int	check;
	int	counter;

	check = 0;
	while (!ft_check_sort(a))
	{
		counter = a->size;
		while (counter > 0)
		{
			if (((a->top->number >> check) & 1) == 1)
				ft_stack_op(a, b, 4);
			else
				ft_stack_op(a, b, 3);
			counter--;
		}
		while (b->size)
		{
			ft_stack_op(a, b, 2);
		}
		check++;
	}
}
