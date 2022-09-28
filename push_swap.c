#include "push_swap.h"
#include <stdio.h>

void	ft_push_swap(int argc, char *argv[])
{
	struct s_stack	*a;
	struct s_dolst	*tmp;

	a = ft_load_stack(argv + 1, argc - 1);
	tmp = a->top;
	while (tmp)
	{
		printf("%d\n", tmp->number);
		tmp = tmp->next;
	}
}

int	main(int argc, char *argv[])
{
	if (argc <= 1)
		return (0);
	ft_push_swap(argc, argv);
}
