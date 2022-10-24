#include "push_swap.h"

int	ft_check_value(char *str)
{
	long int	value;
	int		check;
	int		signal;

	value = 0;
	check = 0;
	signal = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signal = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		check++;
		value = value * 10 + (*str - '0');
		str++;
	}
	value *= signal;
	if (check > 0 && !*str && (value >= -2147483648 && value <= 2147483647))
		return (1);
	else
		return (0);
}

int	ft_check_duplicated(t_stack *stack, t_dolst *value)
{
	struct s_dolst *tmp;

	tmp = stack->top;
	while (tmp)
	{
		if (tmp->number == value->number)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

t_stack	*ft_load_stack(char *values[], int size)
{
	struct s_stack	*stack;
	struct s_dolst	*tmp;
	int 			counter;

	stack = ft_stack_new();
	if (!stack)
		return (NULL);
	counter = 0;
	while (counter < size)
	{
		if (!ft_check_value(values[counter]))
			ft_clean_error(stack, NULL);
		tmp = ft_dolst_new(ft_atoi(values[counter++]));
		if (!ft_check_duplicated(stack, tmp))
			ft_clean_error(stack, NULL);
		ft_stack_addbottom(stack, tmp);
	}
	ft_get_order(stack);
	return (stack);
}
