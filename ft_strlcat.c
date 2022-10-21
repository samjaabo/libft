/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samjaabo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:21:25 by samjaabo          #+#    #+#             */
/*   Updated: 2022/10/20 10:54:17 by samjaabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dsz)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	if (!dest && !dsz)
		return (0);
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (dlen >= dsz)
		return (dsz + slen);
	i = 0;
	while (src[i] && dlen + i + 1 < dsz)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}
