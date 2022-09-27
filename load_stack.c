#include "push_swap.h"

t_stack	*ft_load_stack(char *values[], int size)
{
	struct s_stack *stack;
	int	counter;

	stack = ft_stack_new();
	if (!stack)
		return (NULL);
	counter = 0;
	while (counter < size)
		ft_stack_add(stack, ft_dolst_new(ft_atoi(values[counter++])));
	return (stack);
}
