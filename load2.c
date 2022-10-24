#include "push_swap.h"

void	ft_get_order_helper(int *array, int size)
{
	int	pos;
	int     counter;
	int	tmp;
	int	check;

	pos = 0;
	check = 1;
	while (pos < size && check)
	{
		counter = 0;
		check = 0;
		while (counter < size - 1 - pos)
		{
			if (array[counter] > array[counter + 1])
			{
				tmp = array[counter];
				array[counter] = array[counter + 1];
				array[counter + 1] = tmp;
				check++;
			}
			counter++;
		}
		pos++;
	}
}

void    ft_get_order(t_stack *stack)
{
	int     *array;
	int     counter;
	struct s_dolst  *tmp;

	array = malloc(sizeof(stack->size));
	if (!array)
		ft_clean_error(stack, NULL);
	counter = 0;
	tmp = stack->top;
	while (counter < stack->size)
	{
		array[counter++] = tmp->number;
		tmp = tmp->next;
	}
	ft_get_order_helper(array, stack->size);
	tmp = stack->top;
	while (tmp)
	{
		counter = -1;
		while (++counter < stack->size)
		{
			if (array[counter] == tmp->number)
				tmp->order = counter;
		}
		tmp = tmp->next;
	}
	free(array);
}