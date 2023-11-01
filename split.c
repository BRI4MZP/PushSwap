/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briveiro <briveiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:14:53 by briveiro          #+#    #+#             */
/*   Updated: 2023/10/28 23:18:48 by briveiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	contador(char *s, char c);
static void		creador(char **cadena, char *s, char c, size_t palabras);

char	**ft_split(char *s, char c)
{
	char	**cadena;
	size_t	palabras;

	if (!s)
		return (NULL);
	palabras = contador(s, c);
	cadena = malloc(sizeof(char **) * (palabras + 1));
	if (!cadena)
		return (NULL);
	creador(cadena, s, c, palabras);
	return (cadena);
}

static size_t	contador(char *s, char c)
{
	size_t	contadorpalablas;
	size_t	coincidencia;

	contadorpalablas = 0;
	coincidencia = 1;
	while (*s)
	{
		if (*s != c && coincidencia)
		{
			coincidencia = 0;
			contadorpalablas++;
		}
		else if (*s == c)
			coincidencia = 1;
		s++;
	}
	return (contadorpalablas);
}

static void	creador(char **cadena, char	*s, char c, size_t palabras)
{
	char	*cambio;

	while (*s && *s == c)
		s++;
	while (palabras--)
	{
		cambio = ft_strchr(s, c);
		if (cambio)
		{
			*cadena = ft_substr(s, 0, cambio - s);
			while (*cambio && *cambio == c)
				cambio++;
			s = cambio;
		}
		else
			*cadena = ft_substr(s, 0, ft_strlen(s) + 1);
		cadena++;
	}
	*cadena = NULL;
}

char	*ft_substr(char	*s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	count;

	if (!s)
		return (NULL);
	if ((int)start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > (ft_strlen(s) - start))
		len = (ft_strlen(s) - start);
	s2 = (char *)malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (NULL);
	count = -1;
	while (++count < len)
		s2[count] = *(s + start + count);
	s2[count] = '\0';
	return (s2);
}

char	*ft_strchr(char *s, int c)
{
	int	p;
	int	lensss ;

	lensss = ft_strlen(s);
	p = -1;
	if ((char )c == 0)
		return (((char *)s + lensss));
	while (s[++p])
	{
		if (s[p] == (char)c)
			return (((char *)s + p));
	}
	return (0);
}
