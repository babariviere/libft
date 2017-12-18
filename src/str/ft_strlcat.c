/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:46:19 by briviere          #+#    #+#             */
/*   Updated: 2017/11/13 14:51:30 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		idx;
	size_t		src_idx;
	size_t		dst_len;
	size_t		src_len;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	idx = dst_len;
	if (dst_len > size)
		dst_len = size;
	src_idx = 0;
	while (idx < size - 1 && src_idx < src_len)
		dst[idx++] = src[src_idx++];
	dst[idx] = 0;
	return (dst_len + ft_strlen(src));
}
