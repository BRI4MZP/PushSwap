/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briveiro <briveiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:24:58 by briveiro          #+#    #+#             */
/*   Updated: 2023/11/01 07:27:29 by briveiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_two(t_stack *stack)
{
	if (stack->stack_a[0] > stack->stack_a[1])
		ft_sa(stack);
}

void	ft_three(t_stack *stack)
{
	if (stack->stack_a[0] == 1 && stack->stack_a[1] == 3 
		&& stack->stack_a[2] == 2)
	{
		ft_rra(stack);
		ft_sa(stack);
	}
	if (stack->stack_a[0] == 2)
	{
		if (stack->stack_a[1] == 1)
			ft_sa(stack);
		else
			ft_rra(stack);
	}
	if (stack->stack_a[0] == 3)
	{
		if (stack->stack_a[1] == 1 || stack->stack_a[1] == 2)
			ft_ra(stack);
		if (stack->stack_a[1] == 1)
			ft_sa(stack);
	}
}


void	ft_four(t_stack *stack)
{
	if (stack->stack_a[1] == 4)
		ft_ra(stack);
	else if (stack->stack_a[2] == 4)
	{
		ft_ra(stack);
		ft_ra(stack);
	}
	else if (stack->stack_a[3] == 4)
		ft_rra(stack);
	ft_pb(stack);
	ft_three(stack);
	ft_pa(stack);
	ft_ra(stack);
}

void	ft_five(t_stack *stack)
{
	if (stack->stack_a[0] == 5)
		ft_pb(stack);
	else if (stack->stack_a[1] == 5)
		ft_ra_pb(stack);
	else if (stack->stack_a[2] == 5)
	{
		ft_ra(stack);
		ft_ra_pb(stack);
	}
	else if (stack->stack_a[3] == 5)
	{
		ft_rra(stack);
		ft_rra_pb(stack);
	}
	else if (stack->stack_a[4] == 5)
		ft_rra_pb(stack);
	ft_four(stack);
	ft_pa(stack);
	ft_ra(stack);
}

void	ft_radix(t_stack *stack)
{
	int	omited_bit;
	int	bit_size;
	int	size;

	bit_size = 0;
	size = stack->len_stack_a;
	while (size > 1 && ++bit_size)
		size /= 2;
	omited_bit = -1;
	while (++omited_bit <= bit_size)
	{
		size = stack->len_stack_a;
		while (size-- && !ft_issorted(stack))
		{
			if (((stack->stack_a[0] >> omited_bit) & 1) == 0)
				ft_pb(stack);
			else
				ft_ra(stack);
		}
		ft_radix_b(stack, bit_size, omited_bit + 1);
	}
	while (stack->len_stack_b != 0)
		ft_pa(stack);
}
// void	ft_three(t_stack *stack)
// {
// 	if (stack->stack_a[0] > stack->stack_a[1]
// 		&& stack->stack_a[1] < stack->stack_a[2]
// 		&& stack->stack_a[0] < stack->stack_a[2])
// 		ft_sa(stack);
// 	else if (stack->stack_a[0] > stack->stack_a[1]
// 		&& stack->stack_a[1] > stack->stack_a[2]
// 		&& stack->stack_a[0] > stack->stack_a[2])
// 	{
// 		ft_sa(stack);
// 		ft_rra(stack);
// 	}
// 	else if (stack->stack_a[0] < stack->stack_a[1]
// 		&& stack->stack_a[1] > stack->stack_a[2]
// 		&& stack->stack_a[0] < stack->stack_a[2])
// 		ft_sa_ra(stack);
// 	else if (stack->stack_a[0] < stack->stack_a[1]
// 		&& stack->stack_a[1] > stack->stack_a[2]
// 		&& stack->stack_a[0] > stack->stack_a[2])
// 		ft_rra(stack);
// 	else if (stack->stack_a[0] > stack->stack_a[1]
// 		&& stack->stack_a[1] < stack->stack_a[2]
// 		&& stack->stack_a[0] > stack->stack_a[2])
// 		ft_sa(stack);
// }