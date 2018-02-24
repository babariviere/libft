/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hthash.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 16:55:09 by briviere          #+#    #+#             */
/*   Updated: 2018/02/24 16:57:40 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash.h"

size_t		ft_hthash(const t_hashtable *ht, const char *key)
{
	size_t		res;

	res = 0;
	while (*key)
	{
		res <<= 8;
		res |= *key;
		key++;
	}
	return (res % ht->size);
}
