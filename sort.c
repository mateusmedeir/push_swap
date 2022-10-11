#include "push_swap.h"

void	ft_sort(t_stack *a, t_stack *b)
{
//	int	counter;
//	int	house;

	ft_stack_op(a, b, 3);
	ft_stack_op(a, b, 3);
	ft_stack_op(a, b, 3);
	ft_stack_op(a, b, 3);
	ft_stack_dbop(a, b, 0);
	ft_stack_dbop(a, b, 1);
	ft_stack_dbop(a, b, 0);
	ft_stack_dbop(a, b, 2);
/*	counter = 1;
	house = 1;
	while (counter)
	{
		if (counter % 2 != 0)
			ft_sort_stack(a, b, house);
	}*/
}

/*void	ft_sort_stack(t_stack *from, t_stack *to, int house)
{
	struct s_stack	*tmp;

	tmp = from->top;
	while (tmp)
	{
		
	}
}*/
