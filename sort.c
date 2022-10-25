/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmedeiro <mmedeiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:46:43 by mmedeiro          #+#    #+#             */
/*   Updated: 2022/10/25 10:46:44 by mmedeiro         ###   ########.fr       */
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
