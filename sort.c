/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matlopes <matlopes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:54:18 by matlopes          #+#    #+#             */
/*   Updated: 2023/12/05 10:54:19 by matlopes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_stack *a, t_stack *b)
{
	int	check;
	int	counter;

	check = 0;
	while (!ft_check_sort(a))
	{
		counter = a->size;
		while (counter > 0)
		{
			if (((a->top->order >> check) & 1) == 1)
				ft_stack_op(a, b, 4);
			else
				ft_stack_op(a, b, 3);
			counter--;
		}
		while (b->size)
		{
			ft_stack_op(a, b, 2);
		}
		check++;
	}
}
