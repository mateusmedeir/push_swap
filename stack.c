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

void    ft_stack_addtop(t_stack *stack, t_dolst *value)
{
        if (!stack->top && !stack->bottom)
        {
                stack->top = value;
                stack->bottom = value;
        }
        else
        {
                value->next = stack->top;
                stack->top->prev = value;
                stack->top = value;
        }
}

void	ft_stack_addbottom(t_stack *stack, t_dolst *value)
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

void	ft_stack_to_stack(t_stack *from, t_stack *to)
{
	struct s_dolst *tmp;

	tmp = from->top;
	tmp->next->prev = NULL;
	from->top = tmp->next;
	tmp->next = NULL;
	ft_stack_addtop(to, tmp);
}
