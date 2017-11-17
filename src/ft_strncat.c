/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:43:10 by briviere          #+#    #+#             */
/*   Updated: 2017/11/07 15:24:22 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t		idx;
	size_t		src_idx;

	idx = ft_strlen(dst);
	src_idx = 0;
	while (src_idx < n && src[src_idx] != 0)
		dst[idx++] = src[src_idx++];
	dst[idx] = 0;
	return (dst);
}
