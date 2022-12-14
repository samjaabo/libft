/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samjaabo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:33:03 by samjaabo          #+#    #+#             */
/*   Updated: 2022/10/20 11:07:39 by samjaabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_itoax(int n, char *s)
{
	if (n < 0)
		n = n * -1;
	s[0] = '0';
	s[1] = n / 1000000000 + '0';
	s[2] = n % 1000000000 / 100000000 + '0';
	s[3] = n % 100000000 / 10000000 + '0';
	s[4] = n % 10000000 / 1000000 + '0';
	s[5] = n % 1000000 / 100000 + '0';
	s[6] = n % 100000 / 10000 + '0';
	s[7] = n % 10000 / 1000 + '0';
	s[8] = n % 1000 / 100 + '0';
	s[9] = n % 100 / 10 + '0';
	s[10] = n % 10 / 1 + '0';
	s[11] = '\0';
}

char	*ft_itoa(int n)
{
	char	str[12];
	char	*s;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ft_itoax(n, str);
	s = (char *)str;
	while (*s == '0')
		++s;
	if (n < 0)
		*--s = '-';
	if (n == 0)
		--s;
	return (ft_strdup(s));
}
