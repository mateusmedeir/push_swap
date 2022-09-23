#include "push_swap.h"

void ft_bubble_sort(int array[], int size)
{
	int pos;
	int counter;
	int temp;
	int check;

	pos = 0;
	while (pos <= size)
	{
		counter = 0;
		check = 0;
		while (counter <= size - 1 - pos)
		{
			if (array[counter] > array[counter + 1])
			{
				temp = array[counter];
				array[counter] = array[counter + 1];
				array[counter + 1] = temp;
				check = 1;
                        }
			counter++;
                }
		if (check == 0)
			break ;
		pos++;
	}
}

