#include "push_swap.h"

void	ft_stack_s(t_stack *stack, char *str)
{
	struct s_dolst	*tmp;

	if ((!stack->top && !stack->bottom) || !stack->top->next)
		return ;
	tmp = stack->top;
	stack->top = tmp->next;
	tmp->next = stack->top->next;
	tmp->prev = stack->top;
	stack->top->next = tmp;
	stack->top->prev = NULL;
	if (tmp->next)
		tmp->next->prev = tmp;
	ft_putstr_fd(str, 1);
	ft_putchar_fd('\n', 1);
}

void	ft_stack_p(t_stack *from, t_stack *to, char *str)
{
	if (!from->top && !to->bottom)
		return ;
	ft_stack_to_stack(from, to);
	ft_putstr_fd(str, 1);
	ft_putchar_fd('\n', 1);
}
