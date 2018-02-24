/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htset_delfn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 17:20:46 by briviere          #+#    #+#             */
/*   Updated: 2018/02/24 17:23:54 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash.h"

void	ft_htdel_def(void *ct)
{
	free(ct);
}

void	ft_htset_delfn(t_hashtable *hash, void (*del)(void *))
{
	if (del == FT_HASH_DEL)
		hash->del_fn = ft_htdel_def;
	else
		hash->del_fn = del;
}
