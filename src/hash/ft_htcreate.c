/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htcreate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 16:44:31 by briviere          #+#    #+#             */
/*   Updated: 2018/02/24 16:46:10 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash.h"

t_hashtable		*ft_htcreate(size_t size)
{
	t_hashtable		*res;

	if ((res = malloc(sizeof(t_hashtable))) == 0)
		return (0);
	res->size = size;
	if ((res->entries = ft_memalloc(sizeof(t_htent *) * size)) == 0)
	{
		free(res);
		return (0);
	}
	return (res);
}
