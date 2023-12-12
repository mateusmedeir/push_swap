/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matlopes <matlopes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:54:00 by matlopes          #+#    #+#             */
/*   Updated: 2023/12/12 13:07:34 by matlopes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_sort(t_stack *stack)
{
	t_dolst	*tmp;

	tmp = stack->top;
	while (tmp && tmp->next)
	{
		if (tmp->number > tmp->next->number)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	ft_push_swap(char *values[], int size)
{
	struct s_stack	*a;
	struct s_stack	*b;

	a = ft_load_stack(values, size);
	if (!a)
		ft_error();
	b = ft_stack_new();
	if (!b)
		ft_clean_error(a, NULL);
	if (ft_check_sort(a))
		ft_clean_exit(a, b);
	else if (a->size <= 5)
		ft_sort_lower(a, b);
	else
		ft_sort(a, b);
	ft_clean_exit(a, b);
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
		ft_push_swap(argv + 1, argc - 1);
}
