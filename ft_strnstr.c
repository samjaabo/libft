/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samjaabo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:35:03 by samjaabo          #+#    #+#             */
/*   Updated: 2022/10/20 10:44:10 by samjaabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sear, size_t len)
{
	size_t		n;
	char		*s;

	s = (char *)str;
	n = ft_strlen(sear);
	if ((!str && len == 0) || *sear == '\0')
		return (s);
	while (*s && len >= n && len--)
		if (ft_strncmp(s++, sear, n) == 0)
			return (--s);
	return (NULL);
}
