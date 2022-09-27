#include "push_swap.h"

void	ft_push_swap(int argc, char *argv[])
{
	struct s_stack	*a;
	//int counter;

	a = ft_load_stack(argv + 1, argc - 1);
	//ft_merge_sort(array, argc - 1);
	//counter = 0;
	/*printf("After: ");
        while (counter <= argc - 2)
                printf("%d ", array[counter++]);
        printf("\n");*/

}

int	main(int argc, char *argv[])
{
	if (argc <= 1)
		return (0);
	ft_push_swap(argc, argv);
}
