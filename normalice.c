/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalice.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briveiro <briveiro@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 06:03:53 by briveiro          #+#    #+#             */
/*   Updated: 2023/10/31 19:24:31 by briveiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_normalize(t_stack *stack)
{
	int	*tmp;
	int	*tmpp;

	tmp = malloc(sizeof(int) * stack->max_size);
	tmpp = malloc(sizeof(int) * stack->max_size);
	if (!tmp || !tmpp)
		exit(0);
	ft_memcpy(tmp, stack->stack_a, sizeof(int) * stack->max_size);
	ft_bubble_sort(tmp, stack);
	ft_replace(stack, tmp, tmpp);
	for (int i = 0; i < stack->max_size; i++)
		printf("tmp: %d\n", stack->stack_a[i]);
	free(tmpp);
}

void	ft_bubble_sort(int *tmp, t_stack *stack)
{
	int	aux;
	int	i;
	int	j;

	j = 0;
	while (j < stack->max_size)
	{
		i = 0;
		while (i < stack->max_size - 1)
		{
			if (tmp[i] > tmp[i + 1])
			{
				aux = tmp[i];
				tmp[i] = tmp[i + 1];
				tmp[i + 1] = aux;
			}
			i++;
		}
		j++;
	}
}

void	ft_replace(t_stack *stack, int *temp, int *temp2)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->max_size)
	{
		j = 0;
		while (j < stack->max_size)
		{
			if (temp[i] == stack->stack_a[j])
				temp2[j] = i + 1;
			j++;
		}
		i++;
	}
	free(temp);
	ft_memcpy(stack->stack_a, temp2, sizeof(int) * stack->max_size);
}
