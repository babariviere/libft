/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:36:23 by briviere          #+#    #+#             */
/*   Updated: 2017/11/13 10:12:37 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	uint8_t			*dst_ptr;
	const uint8_t	*src_ptr;
	uint8_t			byte;

	dst_ptr = dst;
	src_ptr = src;
	byte = c;
	while (n--)
	{
		*dst_ptr = *src_ptr;
		if (*dst_ptr == byte)
			return (dst_ptr + 1);
		dst_ptr++;
		src_ptr++;
	}
	return (0);
}
