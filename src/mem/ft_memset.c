/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:34:43 by briviere          #+#    #+#             */
/*   Updated: 2017/11/10 16:29:44 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	uint8_t	*ptr;
	uint8_t	byte;

	byte = c;
	ptr = b;
	while (len--)
		*(ptr++) = byte;
	return (b);
}
