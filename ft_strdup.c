/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samjaabo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 08:59:24 by samjaabo          #+#    #+#             */
/*   Updated: 2022/10/14 12:10:28 by samjaabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t		len;
	char		*cpy;

	len = ft_strlen(str);
	cpy = (char *)malloc(len * sizeof(char) + 1);
	if (!cpy)
		return (NULL);
	(void)ft_strlcpy(cpy, str, len + 1);
	return (cpy);
}
