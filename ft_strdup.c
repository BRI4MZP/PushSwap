/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briveiro <briveiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 07:16:56 by briveiro          #+#    #+#             */
/*   Updated: 2023/02/22 16:27:30 by briveiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	char	*dest;
	size_t	count;

	s2 = (char *)s1;
	dest = (char *)malloc((ft_strlen(s2) + 1));
	count = -1;
	if (!dest)
		return (NULL);
	while (s2[++count])
		dest[count] = s2[count];
	dest[count] = '\0';
	return (dest);
}
