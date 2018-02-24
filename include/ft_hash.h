/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 16:41:15 by briviere          #+#    #+#             */
/*   Updated: 2018/02/24 17:19:35 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HASH_H
# define FT_HASH_H

# include "ft_mem.h"
# include "ft_str.h"

# define FT_HASH_DEL (void (*)(void *))1

typedef struct	s_htent {
	const char		*key;
	void			*val;
	struct s_htent	*next;
}				t_htent;

typedef struct	s_hashtable {
	size_t		size;
	t_htent		**entries;
	void		(*del_fn)(void *);
}				t_hashtable;

t_hashtable		*ft_htcreate(size_t size);
void			ft_htdelete(t_hashtable **ht);
size_t			ft_hthash(const t_hashtable *ht, const char *key);
void			*ft_htget(const t_hashtable *ht, const char *key);
void			ft_htset(t_hashtable *ht, const char *key, void *val);
void			ft_htset_delfn(t_hashtable *ht, void (*del)(void *));

#endif
