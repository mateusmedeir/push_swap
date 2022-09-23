#include "push_swap.h"

int *ft_convert(int argc, char *argv[])
{
	int *array;
	int counter;

	array = malloc((argc - 1) * sizeof(int));
	if (!array)
		//Error
	counter = 0;
        while (counter <= argc - 2)
        {
                array[counter] = atoi(argv[counter + 1]);
                counter++;
        }
	return (array);
}

int main(int argc, char *argv[])
{
	int *array;
	int counter;

	array = ft_convert(argc, argv);
	ft_merge_sort(array, argc - 1);
	counter = 0;
	printf("After: ");
        while (counter <= argc - 2)
                printf("%d ", array[counter++]);
        printf("\n");

}
