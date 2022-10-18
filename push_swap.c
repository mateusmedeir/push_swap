#include "push_swap.h"

void	ft_push_swap(int argc, char *argv[])
{
	struct s_stack	*a;
	struct s_stack	*b;

	a = ft_load_stack(argv + 1, argc - 1);
	if (!a)
		ft_error();
	b = ft_stack_new();
	if (!b)
		ft_clean_error(a, b);
	ft_sort(a, b);
}

int	main(int argc, char *argv[])
{
	if (argc <= 1)
		ft_error();
	ft_push_swap(argc, argv);
}
