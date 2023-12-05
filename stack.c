/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matlopes <matlopes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:54:22 by matlopes          #+#    #+#             */
/*   Updated: 2023/12/05 10:54:24 by matlopes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_dolst	*ft_dolst_new(int number)
{
	struct s_dolst	*new;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->number = number;
	new->order = 0;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

t_stack	*ft_stack_new(void)
{
	struct s_stack	*new;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->size = 0;
	new->top = NULL;
	new->bottom = NULL;
	return (new);
}

void	ft_stack_addtop(t_stack *stack, t_dolst *value)
{
	if (!stack->top)
	{
		stack->size = 1;
		stack->top = value;
		stack->bottom = value;
	}
	else
	{
		value->next = stack->top;
		stack->top->prev = value;
		stack->top = value;
		stack->size++;
	}
}

void	ft_stack_addbottom(t_stack *stack, t_dolst *value)
{
	if (!stack->top)
	{
		stack->size = 1;
		stack->top = value;
		stack->bottom = value;
	}
	else
	{
		value->prev = stack->bottom;
		stack->bottom->next = value;
		stack->bottom = value;
		stack->size++;
	}
}

void	ft_stack_to_stack(t_stack *from, t_stack *to)
{
	struct s_dolst	*tmp;

	tmp = from->top;
	if (tmp->next)
	{
		tmp->next->prev = NULL;
		from->top = tmp->next;
		tmp->next = NULL;
	}
	else
	{
		from->top = NULL;
		from->bottom = NULL;
	}
	from->size--;
	ft_stack_addtop(to, tmp);
}
