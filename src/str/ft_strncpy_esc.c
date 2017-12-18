/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_esc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:38:38 by briviere          #+#    #+#             */
/*   Updated: 2017/12/14 17:18:30 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy_esc(char *dst, const char *src, size_t len)
{
	size_t	didx;
	size_t	sidx;

	sidx = 0;
	didx = 0;
	while (src[sidx] && sidx < len)
	{
		if (src[sidx] == '\\')
			sidx++;
		dst[didx++] = src[sidx++];
	}
	while (didx < len)
		dst[didx++] = 0;
	return (dst);
}
