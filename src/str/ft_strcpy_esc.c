/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_esc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:37:19 by briviere          #+#    #+#             */
/*   Updated: 2017/12/14 17:18:43 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char	*ft_strcpy_esc(char *dst, const char *src)
{
	size_t		didx;
	size_t		sidx;

	sidx = 0;
	didx = 0;
	while (src[sidx] != 0)
	{
		if (src[sidx] == '\\')
			sidx++;
		dst[didx++] = src[sidx++];
	}
	dst[didx] = 0;
	return (dst);
}
