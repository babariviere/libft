/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 17:00:31 by briviere          #+#    #+#             */
/*   Updated: 2018/02/24 17:22:51 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash.h"

static t_htent	*ft_htcreate_ent(const char *key, void *val)
{
	t_htent	*res;

	if ((res = ft_memalloc(sizeof(t_htent))) == 0)
		return (0);
	res->key = key;
	res->val = val;
	return (res);
}	

static void		ft_htpush(t_htent *curr, t_htent *new, void (*del)(void *))
{
	if (ft_strequ(curr->key, new->key))
	{
		del(curr->val);
		curr->val = new->val;
		free(new);
	}
	else if (curr->next == 0)
		curr->next = new;
	else
		ft_htpush(curr->next, new, del);
}

void			ft_htset(t_hashtable *ht, const char *key, void *val)
{
	t_htent	*nw_ent;
	size_t	idx;

	if ((nw_ent = ft_htcreate_ent(key, val)) == 0)
		return ;
	idx = ft_hthash(ht, key);
	if (ht->entries[idx])
		ft_htpush(ht->entries[idx], nw_ent, ht->del_fn);
	else
		ht->entries[idx] = nw_ent;
}
