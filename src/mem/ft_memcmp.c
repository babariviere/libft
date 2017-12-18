/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 12:31:50 by briviere          #+#    #+#             */
/*   Updated: 2017/11/14 13:12:56 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

int				ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const uint8_t	*str1;
	const uint8_t	*str2;

	if (s1 == s2)
		return (0);
	str1 = (const uint8_t *)s1;
	str2 = (const uint8_t *)s2;
	while (n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}
