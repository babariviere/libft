/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:41:08 by briviere          #+#    #+#             */
/*   Updated: 2017/11/10 16:54:04 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char	*ft_strcat(char *dst, const char *src)
{
	char	*dst_ptr;

	dst_ptr = dst + ft_strlen(dst);
	while (*src)
		*dst_ptr++ = *src++;
	*dst_ptr = 0;
	return (dst);
}
