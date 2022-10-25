#include "push_swap.h"

void	ft_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}

void	ft_clean_error(t_stack *a, t_stack *b)
{
	if (a)
		free(a);
	if (b)
		free(b);
	ft_error();
}

void	ft_clean(t_stack *a, t_stack *b)
{
	if (a)
		free(a);
	if (b)
		free(b);
	exit(EXIT_SUCCESS);
}
