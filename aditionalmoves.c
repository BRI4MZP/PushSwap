/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aditionalmoves.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briveiro <briveiro@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:27:11 by briveiro          #+#    #+#             */
/*   Updated: 2023/10/02 15:34:28 by briveiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra_pb(t_stack *stack)
{
	ft_ra(stack);
	ft_pb(stack);
}

void	ft_rra_pb(t_stack *stack)
{
	ft_rra(stack);
	ft_pb(stack);
}

void	ft_pb(t_stack *stack)
{
	int	i;

	if (stack->len_stack_a > 0)
	{
		i = stack->len_stack_b + 1;
		while (--i > 0)
			stack->stack_b[i] = stack->stack_b[i - 1];
		stack->stack_b[0] = stack->stack_a[0];
		i = -1;
		while (++i < stack->len_stack_a - 1)
			stack->stack_a[i] = stack->stack_a[i + 1];
		stack->stack_a[i] = 0;
		stack->len_stack_b++;
		stack->len_stack_a--;
	}
	write(1, "pb\n", 3);
}

void	ft_radix_b(t_stack *stack, int len_bit, int omited)
{
	int	size;

	size = stack->len_stack_b;
	while (size-- && omited <= len_bit && !ft_issorted(stack))
	{
		if (((stack->stack_b[0] >> omited) & 1) == 0)
			ft_rb(stack);
		else
			ft_pa(stack);
	}
	if (ft_issorted(stack))
		while (stack->len_stack_b != 0)
			ft_pa(stack);
}

void	ft_sa_ra(t_stack *stack)
{
	ft_sa(stack);
	ft_ra(stack);
}
