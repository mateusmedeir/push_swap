/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matlopes <matlopes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:53:49 by matlopes          #+#    #+#             */
/*   Updated: 2023/12/05 10:53:52 by matlopes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stack_sab(t_stack *stack)
{
	struct s_dolst	*tmp;

	if (!stack->top || !stack->top->next)
		return (0);
	tmp = stack->top;
	stack->top = tmp->next;
	tmp->next = stack->top->next;
	tmp->prev = stack->top;
	stack->top->next = tmp;
	stack->top->prev = NULL;
	if (tmp->next)
		tmp->next->prev = tmp;
	if (stack->top == stack->bottom)
		stack->bottom = stack->top->next;
	return (1);
}

int	ft_stack_pab(t_stack *from, t_stack *to)
{
	if (!from->top)
		return (0);
	ft_stack_to_stack(from, to);
	return (1);
}

int	ft_stack_rab(t_stack *stack)
{
	struct s_dolst	*tmp;

	if (!stack->top || !stack->top->next)
		return (0);
	tmp = stack->bottom;
	stack->bottom = stack->top;
	stack->top = stack->top->next;
	stack->top->prev = NULL;
	tmp->next = stack->bottom;
	stack->bottom->prev = tmp;
	stack->bottom->next = NULL;
	return (1);
}

int	ft_stack_rrab(t_stack *stack)
{
	struct s_dolst	*tmp;

	if (!stack->top || !stack->top->next)
		return (0);
	tmp = stack->top;
	stack->top = stack->bottom;
	stack->bottom = stack->bottom->prev;
	stack->bottom->next = NULL;
	tmp->prev = stack->top;
	stack->top->next = tmp;
	stack->top->prev = NULL;
	return (1);
}
