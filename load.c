#include "push_swap.h"

int	ft_covert(char *str)
{
	
}

int	ft_check_duplicated(t_stack *stack, t_dolst *value)
{
	struct s_dolst *tmp;

	tmp = stack->top;
	while (tmp)
	{
		if (tmp->number == value->number)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

t_stack	*ft_load_stack(char *values[], int size)
{
	struct s_stack	*stack;
	struct s_dolst	*tmp;
	int 			counter;

	stack = ft_stack_new();
	if (!stack)
		return (NULL);
	counter = 0;
	while (counter < size)
	{
		tmp = ft_dolst_new(ft_atoi(values[counter++]));
		if (!ft_check_duplicated(stack, tmp))
			return (NULL);
		ft_stack_addbottom(stack, tmp);
	}
	return (stack);
}
