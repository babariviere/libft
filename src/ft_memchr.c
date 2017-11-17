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

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const t_uchar	*ptr;
	t_uchar			byte;

	ptr = (const t_uchar *)s;
	byte = (t_uchar)c;
	while (n--)
	{
		if (*ptr == byte)
			return ((void *)ptr);
		ptr++;
	}
	return (0);
}
