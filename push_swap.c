#include "push_swap.h"
/*#include <stdio.h>

void    print(t_dolst *top, char *txt)
{
        struct s_dolst  *tmp;

        tmp = top;
        printf("%s: ", txt);
         while (tmp)
        {
                printf("%d ", tmp->number);
                tmp = tmp->next;
        }
        printf("\n");
}*/

void	ft_push_swap(int argc, char *argv[])
{
	struct s_stack	*a;
	struct s_stack	*b;

	a = ft_load_stack(argv + 1, argc - 1);
	b = ft_stack_new();
	//print(a->top, "BEFORE");
	ft_sort(a, b);
	//print(a->top, "a");
	//print(b->top, "b");
}

int	main(int argc, char *argv[])
{
	if (argc <= 1)
		return (0);
	ft_push_swap(argc, argv);
}
