/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_lower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmedeiro <mmedeiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:48:12 by mmedeiro          #+#    #+#             */
/*   Updated: 2022/10/25 10:48:13 by mmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_stack *a, t_stack *b)
{
	while (!ft_check_sort(a))
	{
		if (a->top->number > a->top->next->number
			&& a->top->next->number < a->bottom->number
			&& a->top->number > a->bottom->number)
			ft_stack_op(a, b, 4);
		else if (a->top->number < a->top->next->number
			&& a->top->number > a->bottom->number)
			ft_stack_op(a, b, 6);
		else
			ft_stack_op(a, b, 0);
	}
}

int	ft_lower_numbers(t_stack *stack, int check)
{
	struct s_dolst	*tmp;
	int				lower;
	int				se_lower;

	tmp = stack->top;
	lower = tmp->number;
	se_lower = tmp->next->number;
	while (tmp)
	{
		if (tmp->number < lower)
		{
			se_lower = lower;
			lower = tmp->number;
		}
		if (tmp->number < se_lower && tmp->number != lower)
			se_lower = tmp->number;
		tmp = tmp->next;
	}
	if (check == 1)
		return (se_lower);
	return (lower);
}

void	ft_sort_lower_helper(t_stack *a, t_stack *b)
{
	int	lower;
	int	se_lower;

	lower = ft_lower_numbers(a, 0);
	if (a->size == 4)
	{
		while (a->top->number != lower)
			ft_stack_op(a, b, 4);
		ft_stack_op(a, b, 3);
	}
	else
	{
		se_lower = ft_lower_numbers(a, 1);
		while (a->size > 3)
		{
			while (a->top->number != lower && a->top->number != se_lower)
				ft_stack_op(a, b, 4);
			ft_stack_op(a, b, 3);
		}
	}
	ft_sort_lower(a, b);
	while (b->size)
		ft_stack_op(a, b, 2);
	if (a->top->number > a->top->next->number)
		ft_stack_op(a, b, 0);
}

void	ft_sort_lower(t_stack *a, t_stack *b)
{
	int	check;

	check = ft_check_sort(a);
	if (a->size == 2 && !check)
		ft_stack_op(a, b, 0);
	else if (a->size == 3 && !check)
		ft_sort_three(a, b);
	else if (a->size > 3 && !check)
		ft_sort_lower_helper(a, b);
}
