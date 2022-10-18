/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samjaabo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:56:28 by samjaabo          #+#    #+#             */
/*   Updated: 2022/10/13 12:56:33 by samjaabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int dest_len)
{
	size_t		length;

	length = ft_strlen(src);

	if (dest_len > length)
		ft_memcpy(dest, (void *)src, length + 1);
	else if (dest_len > 0)
	{
		ft_memcpy(dest, (void *)src, dest_len - 1);
		dest[dest_len - 1] = '\0';
	}
	return (length);
}
