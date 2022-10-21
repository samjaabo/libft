/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samjaabo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:33:55 by samjaabo          #+#    #+#             */
/*   Updated: 2022/10/20 09:06:29 by samjaabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, size_t start, size_t end)
{
	char	*alloc;
	char	*strc;

	if (!str)
		return (NULL);
	strc = (char *)str;
	if (end <= start)
		return (ft_strdup(""));
	alloc = (char *)malloc(end + 1);
	if (!alloc)
		return (NULL);
	strc = strc + start;
	(void)ft_strlcpy(alloc, strc, end + 1);
	return (alloc);
}
