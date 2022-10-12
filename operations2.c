#include "push_swap.h"

void	ft_stack_call(t_stack *stack, int (*f)(t_stack*), char *str)
{
	if (!(*f)(stack))
		return ;
	ft_putstr_fd(str, 1);
	ft_putchar_fd('\n', 1);
}

void	ft_stack_op(t_stack *a, t_stack *b, int check)
{
	if (check == 0)
		ft_stack_call(a, ft_stack_sab, "sa");
	else if (check == 1)
		ft_stack_call(b, ft_stack_sab, "sb");
	else if (check == 2)
	{
		if (!ft_stack_pab(b, a))
			return ;
		ft_putstr_fd("pa", 1);
		ft_putchar_fd('\n', 1);
	}
	else if (check == 3)
	{
		if (!ft_stack_pab(a, b))
			return ;
		ft_putstr_fd("pb", 1);
		ft_putchar_fd('\n', 1);
	}
	else if (check == 4)
		ft_stack_call(a, ft_stack_rab, "ra");
	else if (check == 5)
		ft_stack_call(b, ft_stack_rab, "rb");
	else if (check == 6)
		ft_stack_call(a, ft_stack_rrab, "rra");
	else if (check == 7)
		ft_stack_call(b, ft_stack_rrab, "rrb");
}

void	ft_stack_dbop(t_stack *a, t_stack *b, int check)
{
	if (check == 0)
	{
		if (!ft_stack_sab(a) || !ft_stack_sab(b))
			return ;
		ft_putstr_fd("ss", 1);
		ft_putchar_fd('\n', 1);
	}
	else if (check == 1)
	{
		if (!ft_stack_rab(a) || !ft_stack_rab(b))
			return ;
		ft_putstr_fd("rr", 1);
		ft_putchar_fd('\n', 1);
	}
	else if (check == 2)
	{
		if (!ft_stack_rrab(a) || !ft_stack_rrab(b))
			return ;
		ft_putstr_fd("rrr", 1);
		ft_putchar_fd('\n', 1);
	}
}
