#include "push_swap.h"

void	ft_stack_ss(t_stack *a, t_stack *b)
{
	ft_stack_sab(a, NULL);
	ft_stack_sab(b, NULL);
	ft_putstr_fd("ss", 1);
	ft_putchar_fd('\n', 1);
}

void	ft_stack_rr(t_stack *a, t_stack *b)
{
	ft_stack_rab(a, NULL);
	ft_stack_rab(b, NULL);
	ft_putstr_fd("rr", 1);
	ft_putchar_fd('\n', 1);
}
