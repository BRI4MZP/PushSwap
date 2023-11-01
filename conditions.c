/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briveiro <briveiro@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 19:11:52 by briveiro          #+#    #+#             */
/*   Updated: 2023/10/31 19:03:56 by briveiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_repeat_nums(t_stack *stack)
{
	int		i;
	int		j;

	i = 0;
	while (i < stack->max_size)
	{
		j = i;
		while (j < stack->max_size)
		{
			if (stack->stack_a[i] == stack->stack_a[j] && i != j)
			{
				write(2, "Error Numeros repetidos", 24);
				exit(0);
			}
			j++;
		}
		i++;
	}
}

void	ft_max(t_stack *stack)
{
	int		i;

	i = 0;
	stack->max_a = stack->stack_a[0];
	while (i < stack->max_size)
	{
		if (stack->stack_a[i] > stack->max_a)
			stack->max_a = stack->stack_a[i];
		i++;
	}
}
