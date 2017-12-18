/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 12:21:33 by briviere          #+#    #+#             */
/*   Updated: 2017/11/13 10:14:48 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const uint8_t	*ptr;
	uint8_t			byte;

	ptr = (const uint8_t *)s;
	byte = (uint8_t)c;
	while (n--)
	{
		if (*ptr == byte)
			return ((void *)ptr);
		ptr++;
	}
	return (0);
}
