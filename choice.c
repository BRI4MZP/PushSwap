/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choice.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briveiro <briveiro@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:22:40 by briveiro          #+#    #+#             */
/*   Updated: 2023/10/31 19:13:32 by briveiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_choice(t_stack *stack)
{
	if (stack->max_size == 2 && stack->stack_a[0] > stack->stack_a[1])
		ft_two(stack);
	else if (stack->max_size == 3 && !ft_issorted(stack))
		ft_three(stack);
	else if (stack->max_size == 4 && !ft_issorted(stack))
		ft_four(stack);
	else if (stack->max_size == 5 && !ft_issorted(stack))
		ft_five(stack);
	else if (stack->max_size > 5 && !ft_issorted(stack))
		ft_radix(stack);
	else
		exit(0);
}

// void	radix(t_stack *stacks)
// {
// 	int			i;
// 	uint32_t	mask;

// 	i = 0;
// 	mask = 0b1;
// 	while (!ft_is_sorted(stacks))
// 	{
// 		while (i < stacks->max_size)
// 		{
// 			if (!(stacks->stack_a[0] & mask))
// 				pb(stacks);
// 			else if (stacks->len_stack_a > 1)
// 				ra(stacks, 1);
// 			i++;
// 		}
// 		while (stacks->len_stack_b > 0)
// 			pa(stacks);
// 		i = 0;
// 		mask <<= 1;
// 	}
// }