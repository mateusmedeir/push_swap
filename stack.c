#include "push_swap.h"

t_dolst	*ft_dolst_new(int number)
{
	struct s_dolst	*new;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->number = number;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

void	ft_stack_add(t_stack *stack, t_dolst *value)
{
	if (!stack->top && !stack->bottom)
	{
		stack->top = value;
		stack->bottom = value;
	}
	else
	{
		value->prev = stack->bottom;
		stack->bottom->next = value;
		stack->bottom = value;
	}
}

t_stack	*ft_stack_new()
{
	struct s_stack	*new;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->top = NULL;
	new->bottom = NULL;
	return (new);
}
