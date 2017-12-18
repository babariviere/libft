/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:37:19 by briviere          #+#    #+#             */
/*   Updated: 2017/11/10 16:26:41 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t		idx;

	idx = 0;
	while (src[idx] != 0)
	{
		dst[idx] = src[idx];
		idx++;
	}
	dst[idx] = 0;
	return (dst);
}
