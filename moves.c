/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briveiro <briveiro@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:29:42 by briveiro          #+#    #+#             */
/*   Updated: 2023/10/31 19:10:48 by briveiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stack *stack)
{
	int		aux;

	aux = stack->stack_a[0];
	stack->stack_a[0] = stack->stack_a[1];
	stack->stack_a[1] = aux;
	write(1, "sa\n", 3);
}

void	ft_ra(t_stack *stack)
{
	int	temp;
	int	i;

	if (stack->len_stack_a > 1)
	{
		temp = stack->stack_a[0];
		i = 0;
		while (i < stack->len_stack_a - 1)
		{
			stack->stack_a[i] = stack->stack_a[i + 1];
			i++;
		}
		stack->stack_a[i] = temp;
	}
	write(1, "ra\n", 3);
}

void	ft_pa(t_stack *stack)
{
	int		i;

	if (stack->len_stack_b > 0)
	{
		i = stack->len_stack_a + 1;
		while (--i > 0)
			stack->stack_a[i] = stack->stack_a[i - 1];
		stack->stack_a[0] = stack->stack_b[0];
		i = -1;
		while (++i < stack->len_stack_b - 1)
			stack->stack_b[i] = stack->stack_b[i + 1];
		stack->stack_b[i] = 0;
		stack->len_stack_a++;
		stack->len_stack_b--;
	}
	write(1, "pa\n", 3);
}

void	ft_rb(t_stack *stack)
{
	int	temp;
	int	i;

	if (stack->len_stack_b > 1)
	{
		temp = stack->stack_b[0];
		i = 0;
		while (i < stack->len_stack_b - 1)
		{
			stack->stack_b[i] = stack->stack_b[i + 1];
			i++;
		}
		stack->stack_b[i] = temp;
	}
	write(1, "rb\n", 3);
}

void	ft_rra(t_stack *stack)
{
	int		i;
	int		aux;

	i = stack->max_size - 1;
	aux = stack->stack_a[i];
	while (i > 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->stack_a[i] = aux;
	write(1, "rra\n", 4);
}
