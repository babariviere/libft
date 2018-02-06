/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 17:05:33 by briviere          #+#    #+#             */
/*   Updated: 2018/02/06 19:24:14 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

size_t	ft_tablen(const void *tab, size_t elem)
{
	size_t				len;
	const unsigned char	*tptr;
	unsigned char		nul[elem];

	len = 0;
	tptr = tab;
	ft_bzero(nul, elem);
	while (ft_memcmp(tptr + (len * elem), nul, elem) != 0)
		len++;
	return (len);
}
