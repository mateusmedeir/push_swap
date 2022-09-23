#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>

void	ft_merge_sort_arrays(int array[], int left, int middle, int right);
void	ft_merge_sort_recursion(int array[], int left, int right);
void	ft_merge_sort(int array[], int size);
void	ft_bubble_sort(int array[], int size);
int	*ft_convert(int argc, char *argv[]);

#endif
