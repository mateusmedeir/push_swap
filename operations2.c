/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matlopes <matlopes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:53:55 by matlopes          #+#    #+#             */
/*   Updated: 2023/12/05 10:53:56 by matlopes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_print(char *str)
{
	ft_putstr_fd(str, 1);
	ft_putchar_fd('\n', 1);
}

void	ft_stack_call(t_stack *stack, int (*f)(t_stack*), char *str)
{
	if (!(*f)(stack))
		return ;
	ft_stack_print(str);
}

void	ft_stack_op(t_stack *a, t_stack *b, int check)
{
	if (check == 0)
		ft_stack_call(a, ft_stack_sab, "sa");
	else if (check == 1)
		ft_stack_call(b, ft_stack_sab, "sb");
	else if (check == 2)
	{
		if (!ft_stack_pab(b, a))
			return ;
		ft_stack_print("pa");
	}
	else if (check == 3)
	{
		if (!ft_stack_pab(a, b))
			return ;
		ft_stack_print("pb");
	}
	else if (check == 4)
		ft_stack_call(a, ft_stack_rab, "ra");
	else if (check == 5)
		ft_stack_call(b, ft_stack_rab, "rb");
	else if (check == 6)
		ft_stack_call(a, ft_stack_rrab, "rra");
	else if (check == 7)
		ft_stack_call(b, ft_stack_rrab, "rrb");
}

void	ft_stack_dbop(t_stack *a, t_stack *b, int check)
{
	if (check == 0)
	{
		if (!ft_stack_sab(a) || !ft_stack_sab(b))
			return ;
		ft_stack_print("ss");
	}
	else if (check == 1)
	{
		if (!ft_stack_rab(a) || !ft_stack_rab(b))
			return ;
		ft_stack_print("rr");
	}
	else if (check == 2)
	{
		if (!ft_stack_rrab(a) || !ft_stack_rrab(b))
			return ;
		ft_stack_print("rrr");
	}
}
