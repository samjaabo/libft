/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samjaabo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:33:21 by samjaabo          #+#    #+#             */
/*   Updated: 2022/10/19 12:56:04 by samjaabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
static void rm_duplication(char *s, char c, char fill)
{
	char	*p;

	p = s;
	while (*s)
	{
		if (*s == c)
		{
			*p++ = fill;
			++s;
			while (*s == c)
				++s;
		}
		else
			*p++ = *s++;
	}
	*p = '\0';
	if (p != s && *--p == c)
		*p = '\0';
}

static int	my_split(char **ar, char *s, int n)
{
	char	*tmp;
	char	**array;

	array = ar;
	if (*s != '\0')
	{
		tmp = ft_strdup(s);
		if (!tmp)
			return (0);
		*array++ = tmp;
	}
	while (n--)
	{
		s = ft_strchr(s, '\0');
		tmp = ft_strdup(++s);
		if (!tmp)
			return (0);
		*array++ = tmp;
	}
	*array = NULL;
	return (1);
}

static int	ft_count(char *str, char c)
{
	int	n;

	n = 0;
	while (*str)
	{
		if (*str == c)
			++n;
		++str;
	}
	return (n);
}

char	**ft_split(char const *str, char c)
{
	char	**array;
	char	*alloc;
	int		n;
	
	alloc = ft_strdup(str);
	if (!alloc)
		return (NULL);
	rm_duplication(alloc, c, c);
	n = ft_count(alloc, c);
	rm_duplication(alloc, c, '\0');
	array = (char **)malloc((n + 1) * sizeof(char **));
	if (!array)
		return (NULL);
	*array = NULL;
	if (*str == '\0' && c == '\0')
		return (array);
	if (my_split(array, alloc, n) == 0)
		return (NULL);
	free(alloc);
	return (array);
}
