/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briveiro <briveiro@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:02:12 by briveiro          #+#    #+#             */
/*   Updated: 2023/10/31 18:40:01 by briveiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	c;
	char	*a;
	char	*b;

	c = 0;
	a = (char *)dst;
	b = (char *)src;
	if (n == 0 || dst == src)
	{
		return (dst);
	}
	while (c < n)
	{
		a[c] = b[c];
		c++;
	}
	return (dst);
}

void	ft_free_split(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}
int	ft_issorted(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->max_size - 1)
	{
		if (stack->stack_a[i] > stack->stack_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	ft_callocb(t_stack *stack)
{
	int	i;

	i = 0;
	stack->stack_b = malloc(sizeof(int) * stack->max_size);
	if (!stack->stack_b)
		exit(0);
	while (i < stack->max_size)
	{
		stack->stack_b[i] = 0;
		i++;
	}
}

void	ft_free(t_stack *stack)
{
	free(stack->stack_a);
	free(stack->stack_b);
	// free(stack->tmpchr);
	free(stack);
}

// //	int					*stack_a;
// 	int					*stack_b;
// 	int					len_stack_a;
// 	int					max_a;
// 	int					len_stack_b;
// 	int					max_size;
// 	char				**tmpchr;
// }					t_stack;