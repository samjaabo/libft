/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samjaabo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:40:34 by samjaabo          #+#    #+#             */
/*   Updated: 2022/10/20 10:40:40 by samjaabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t len, size_t type_size)
{
	size_t	sz;
	void	*data;

	sz = len * type_size;
	data = malloc(sz);
	if (!data)
		return (NULL);
	(void)ft_bzero(data, sz);
	return (data);
}
