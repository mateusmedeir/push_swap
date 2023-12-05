/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matlopes <matlopes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:54:08 by matlopes          #+#    #+#             */
/*   Updated: 2023/12/05 10:54:09 by matlopes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_dolst
{
	int				number;
	int				order;
	struct s_dolst	*next;
	struct s_dolst	*prev;
}				t_dolst;

typedef struct s_stack
{
	int				size;
	struct s_dolst	*top;
	struct s_dolst	*bottom;
}				t_stack;

int		ft_check_sort(t_stack *stack);
void	ft_push_swap(char *values[], int size);
void	ft_sort_three(t_stack *a, t_stack *b);
int		ft_lower_numbers(t_stack *stack, int check);
void	ft_sort_lower_helper(t_stack *a, t_stack *b);
void	ft_sort_lower(t_stack *a, t_stack *b);
void	ft_sort(t_stack *a, t_stack *b);
t_dolst	*ft_dolst_new(int number);
t_stack	*ft_stack_new(void);
void	ft_stack_addtop(t_stack *stack, t_dolst *value);
void	ft_stack_addbottom(t_stack *stack, t_dolst *value);
void	ft_stack_to_stack(t_stack *from, t_stack *to);
int		ft_stack_sab(t_stack *stack);
int		ft_stack_pab(t_stack *from, t_stack *to);
int		ft_stack_rab(t_stack *stack);
int		ft_stack_rrab(t_stack *stack);
void	ft_stack_print(char *str);
void	ft_stack_call(t_stack *stack, int (*f)(t_stack*), char *str);
void	ft_stack_op(t_stack *a, t_stack *b, int check);
void	ft_stack_dbop(t_stack *a, t_stack *b, int check);
int		ft_check_value(char *str);
int		ft_check_duplicated(t_stack *stack, t_dolst *value);
t_stack	*ft_load_stack(char *values[], int size);
void	ft_get_array_order(int *array, int size);
int		*ft_get_order_helper(t_stack *stack);
void	ft_get_order(t_stack *stack);
void	ft_error(void);
void	ft_clean(t_stack *stack);
void	ft_clean_error(t_stack *a, t_stack *b);
void	ft_clean_exit(t_stack *a, t_stack *b);
#endif
