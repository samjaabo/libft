/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samjaabo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:33:48 by samjaabo          #+#    #+#             */
/*   Updated: 2022/10/18 11:08:18 by samjaabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isinstr(char const *str, char c)
{
	char	*s;

	s = (char *)str;
	while (*s)
		if (*s++ == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *str, const char *remove)
{
	char	*start;
	char	*end;
	char	*alloc;
	size_t	n;

	start = (char *)str;
	end = (char *)str;
	end = ft_strchr(str, '\0');
	end--;
	n = 0;
	while (isinstr(remove, *start) && *start++)
		++n;
	while (isinstr(remove, *end) && start < end--)
		++n;
	n = ft_strlen(str) - n + 1;
	alloc = (char *)malloc(n);
	if (!alloc)
		return (NULL);
	(void)ft_strlcpy(alloc, start, n);
	return (alloc);
}
