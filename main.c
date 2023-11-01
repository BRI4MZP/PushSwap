/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briveiro <briveiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 20:34:04 by briveiro          #+#    #+#             */
/*   Updated: 2023/11/01 07:13:10 by briveiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	atexittt(void)
{
	system("leaks a.out");
	exit(0);
}

t_stack	*ft_struct_init(int argc, char **argv)
{
	t_stack	*stack;
	int		count;

	count = -1;
	if (argc == 1)
	{
		exit(0);
	}
	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		exit(0);
	if (argc == 2)
	{
		stack->tmpchr = ft_split(argv[1], ' ');
		for (int i = 0; stack->tmpchr[i]; i++)
			printf("tmpchr: %s\n", stack->tmpchr[i]);
		stack->max_size = ft_stack_sice(stack->tmpchr);
		stack->stack_a = malloc(sizeof(int *) * stack->max_size);
		if (!stack->stack_a)
			exit(0);
		while (stack->tmpchr[++count])
		{
			stack->stack_a[count] = ft_atoi(stack->tmpchr[count]);
			printf("stack_a: %d\n", stack->stack_a[count]);
		}
	}
	else
		inserter(stack, argc, argv, count);
	return (stack);
}

void	inserter(t_stack *stack, int argc, char **argv, int count)
{
	stack->max_size = argc - 1;
	stack->stack_a = malloc(sizeof(int *) * stack->max_size);
	if (!stack->stack_a)
	{
		write(2, "Error\n", 6);
		exit(0);
	}
	while (++count < stack->max_size)
		stack->stack_a[count] = ft_atoi(argv[count + 1]);
}

void	ft_len_stack(t_stack *stack)
{
	stack->len_stack_a = stack->max_size;
	stack->len_stack_b = 0;
}

void	ft_checklimits(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack->stack_a[i] != '\0')
	{
		if (stack->stack_a[i] < -2147483648 || stack->stack_a[i] > 2147483647)
		{
			write(2, "Error \n", 7);
			free(stack);
			exit(0);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*stack;

	// atexit(atexittt);
	stack = ft_struct_init(argc, argv);

	ft_len_stack(stack);
	ft_checklimits(stack);
	ft_repeat_nums(stack);
	ft_callocb(stack);
	ft_normalize(stack);
	for (int i = 0; i < stack->max_size; i++)
		printf("antes del ordenamiento stack_a: %d\n", stack->stack_a[i]);
	ft_choice(stack);
	for (int i = 0; i < stack->max_size; i++)
		printf(" despues stack_a: %d\n", stack->stack_a[i]);
	ft_free(stack);
	if (argc == 2)
		ft_free_split(stack->tmpchr);
	return (0);
}
