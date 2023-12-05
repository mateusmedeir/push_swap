/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_arrays.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matlopes <matlopes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:41:24 by matlopes          #+#    #+#             */
/*   Updated: 2023/11/28 16:47:46 by matlopes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_arrays(char *array[])
{
	int	counter;

	counter = 0;
	while (array[counter])
		free(array[counter++]);
	free(array);
}
