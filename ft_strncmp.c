/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samjaabo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:42:48 by samjaabo          #+#    #+#             */
/*   Updated: 2022/10/16 18:21:46 by samjaabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s11, const char *s22, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)s11;
	s2 = (unsigned char *)s22;
	while (*s1 && *s2 && --n)
		if (*s1++ != *s2++)
			return (*--s1 - *--s2);
	return (*s1 - *s2);
}
