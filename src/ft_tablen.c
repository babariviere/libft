/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 17:05:33 by briviere          #+#    #+#             */
/*   Updated: 2017/11/30 22:59:02 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_tablen(const void *tab, size_t elem)
{
	size_t			len;
	const t_uchar	*tptr;

	len = 0;
	tptr = tab;
	while (ft_memcmp(tab + (len * elem), 0, elem) == 0)
		len++;
	return (len);
}
