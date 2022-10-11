#include "push_swap.h"

void	ft_stack_sab(t_stack *stack)
{
	struct s_dolst	*tmp;

	if (!stack->top || !stack->top->next)
		return ;
	tmp = stack->top;
	stack->top = tmp->next;
	tmp->next = stack->top->next;
	tmp->prev = stack->top;
	stack->top->next = tmp;
	stack->top->prev = NULL;
	if (tmp->next)
		tmp->next->prev = tmp;
	if (stack->top == stack->bottom)
		stack->bottom = stack->top->next;
}

void	ft_stack_pab(t_stack *from, t_stack *to)
{
	if (!from->top)
		return ;
	ft_stack_to_stack(from, to);
}

void	ft_stack_rab(t_stack *stack)
{
	struct s_dolst  *tmp;

	if (!stack->top || !stack->top->next)
		return ;
	tmp = stack->bottom;
	stack->bottom = stack->top;
	stack->top = stack->top->next;
	stack->top->prev = NULL;
	tmp->next = stack->bottom;
	stack->bottom->prev = tmp;
	stack->bottom->next = NULL;
}

void	ft_stack_rrab(t_stack *stack)
{
	struct s_dolst  *tmp;

	if (!stack->top || !stack->top->next)
		return ;
	tmp = stack->top;
	stack->top = stack->bottom;
	stack->bottom = stack->bottom->prev;
	stack->bottom->next = NULL;
	tmp->prev = stack->top;
	stack->top->next = tmp;
	stack->top->prev = NULL;
}