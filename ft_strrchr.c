/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samjaabo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:37:03 by samjaabo          #+#    #+#             */
/*   Updated: 2022/10/20 10:43:10 by samjaabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*s;

	s = ft_strchr(str, '\0');
	if (c == '\0')
		return (s);
	while (s-- >= str)
		if (*s == c)
			return (s);
	return (NULL);
}
