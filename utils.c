/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briveiro <briveiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:23:21 by briveiro          #+#    #+#             */
/*   Updated: 2023/10/30 16:22:59 by briveiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
	{
		write(2, "Error", 5);
		exit(0);
	}
	return (0);
}

int	count_params(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (ft_isdigit(str[count]))
			count++;
		else if (str[count] == ' ' && ft_isdigit(str[count + 1]))
			count++;
		else
			return (-1);
	}
	return (count);
}

int	ft_atoi(const char *str)
{
	long	cont;
	long	pos;
	int		neg;

	cont = 0;
	pos = 0;
	neg = 0;
	if ((str[pos] && str[pos] == 45) || str[pos] == '-')
	{
		neg = 1;
		pos++;
	}
	else if (str[pos] && str[pos] == '+')
		pos++;
	while (str[pos] && ft_isdigit(str[pos]))
	{
		cont = (cont * 10) + (str[pos] - '0');
		pos++;
	}
	if (neg == 1)
		cont = cont * -1;
	if (cont > 2147483647 || cont < -2147483648)
	{
		exit(0);
	}
	return (cont);
}

int	ft_stack_sice(char **str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

int	ft_strlen(char *s)
{
	int	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}
