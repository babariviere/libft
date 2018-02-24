/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htdelete.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 16:46:25 by briviere          #+#    #+#             */
/*   Updated: 2018/02/24 17:23:18 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash.h"

static void	ft_htdelete_entry(t_htent **entry, void (*del)(void *ct))
{
	t_htent		*tmp;

	tmp = *entry;
	if (tmp->next)
		ft_htdelete_entry(&tmp->next, del);
	if (del)
		del(tmp->val);
	free(tmp);
	*entry = 0;
}

void		ft_htdelete(t_hashtable **ht)
{
	size_t		idx;
	t_hashtable	*tmp;

	if (ht == 0)
		return ;
	tmp = *ht;
	if (tmp)
	{
		idx = 0;
		while (idx < tmp->size)
		{
			if (tmp->entries[idx])
				ft_htdelete_entry(tmp->entries + idx, tmp->del_fn);
			idx++;
		}
	}
	free(tmp);
	*ht = 0;
}
