/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmedeiro <mmedeiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:52:33 by mmedeiro          #+#    #+#             */
/*   Updated: 2022/10/25 13:14:23 by mmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}

void	ft_clean(t_stack *stack)
{
	struct s_dolst	*tmp1;
	struct s_dolst	*tmp2;

	tmp1 = stack->top;
	while (tmp1)
	{
		tmp2 = tmp1->next;
		free(tmp1);
		tmp1 = tmp2;
	}
	free(stack);
}

void	ft_clean_error(t_stack *a, t_stack *b)
{
	if (a)
		ft_clean(a);
	if (b)
		ft_clean(b);
	ft_error();
}

void	ft_clean_exit(t_stack *a, t_stack *b)
{
	if (a)
		ft_clean(a);
	if (b)
		ft_clean(b);
	exit(EXIT_SUCCESS);
}
