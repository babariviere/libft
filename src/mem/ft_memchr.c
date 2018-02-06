/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 12:21:33 by briviere          #+#    #+#             */
/*   Updated: 2018/02/06 19:23:34 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		byte;

	ptr = (const unsigned char *)s;
	byte = (unsigned char)c;
	while (n--)
	{
		if (*ptr == byte)
			return ((void *)ptr);
		ptr++;
	}
	return (0);
}
