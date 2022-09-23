#include "push_swap.h"

void	ft_merge_sort_arrays(int array[], int left, int middle, int right)
{
	int	l_size = middle - left + 1;
	int	r_size = right - middle;
	int     temp_left[l_size];
        int     temp_right[r_size];
	int i, j, k;

	i = 0;
	while (i < l_size)
	{
		temp_left[i] = array[left + i];
		i++;
	}
	i = 0;
	while (i < r_size)
	{
		temp_right[i] = array[middle + 1 + i];
		i++;
	}
	i = 0;
	j = 0;
	k = left;
	while (k <= right)
	{
		if (((i < l_size) && (j >= r_size)) || temp_left[i] <= temp_right[j])
		{
			array[k] = temp_left[i];
			i++;
		}
		else
		{
			array[k] = temp_right[j];
			j++;
		}
		k++;
	}
}

void	ft_merge_sort_recursion(int array[], int left, int right)
{
	int	middle;

	if (left < right)
	{
		middle = left + (right - left) / 2;
		ft_merge_sort_recursion(array, left, middle);
		ft_merge_sort_recursion(array, middle + 1, right);
		ft_merge_sort_arrays(array, left, middle, right);
	}
}

void	ft_merge_sort(int array[], int size)
{
	ft_merge_sort_recursion(array, 0, size - 1);
}
