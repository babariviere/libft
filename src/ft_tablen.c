/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 17:05:33 by briviere          #+#    #+#             */
/*   Updated: 2017/11/30 23:05:51 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_tablen(const void *tab, size_t elem)
{
	size_t			len;
	const t_uchar	*tptr;
	t_uchar			nul[elem];

	len = 0;
	tptr = tab;
	ft_bzero(nul, elem);
	while (ft_memcmp(tptr + (len * elem), nul, elem) == 0)
		len++;
	return (len);
}
