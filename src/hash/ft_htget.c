/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htget.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 16:57:53 by briviere          #+#    #+#             */
/*   Updated: 2018/02/24 17:15:30 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash.h"

void		*ft_htget(const t_hashtable *ht, const char *key)
{
	t_htent	*ent;
	size_t	idx;

	idx = ft_hthash(ht, key);
	ent = ht->entries[idx];
	if (ent == 0)
		return (0);
	while (ent && !ft_strequ(ent->key, key))
		ent = ent->next;
	return (ent->val);
}
