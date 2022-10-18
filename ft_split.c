/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samjaabo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:33:21 by samjaabo          #+#    #+#             */
/*   Updated: 2022/10/18 12:38:34 by samjaabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_move(char *str, char c)
{
	while (*str == c && *str)
		++str;
}

static int	ft_count(char *str, char c)
{
	int		n;

	n = 0;
	while (*str != c && *str)
	{
		++str;
		++n;
	}
	return (n);
}

char	**ft_split(char const *str, char c)
{
	char	**array;
	char	**ar;
	char	*alloc;
	char	*s;
	int		n;
	int		count;

	count = 0;
	s = (char *)str;
	while (*s)
	{
		ft_move(s, c);
		n = ft_count(s, c);
		if (n != 0 || *s != '\0')
			count++;
	}
	array = (char **)malloc((count + 1) * sizeof(char **));
	ar = array;
	if (!array)
		return (NULL);
	s = (char *)str;
	while (*s)
	{
		ft_move(s, c);
		n = ft_count(s, c);
		if (n == 0 || *s == '\0')
			continue ;
		alloc = (char *)malloc(n + 1);
		if (!alloc)
			return (NULL);
		(void)ft_strlcpy(alloc, s, n + 1);
		*array++ = alloc;
	}
	*array = NULL;
	return (ar);
}
