/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:47:09 by briviere          #+#    #+#             */
/*   Updated: 2017/12/18 16:53:39 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DLST_H
# define FT_DLST_H

# include "ft_mem.h"
# include "string.h"

typedef struct	s_dlist
{
	void			*content;
	size_t			content_size;
	struct s_dlist	*prev;
	struct s_dlist	*next;
}				t_dlst;

t_dlst			*ft_dlstnew(const void *content, size_t content_size);
t_dlst			*ft_dlstnew_mv(const void *content, size_t content_size);
void			ft_dlstdelone(t_dlst **alst, void (*del)(void *, size_t));
void			ft_dlstdel(t_dlst **alst, void (*del)(void *, size_t));
void			ft_dlstadd(t_dlst **alst, t_dlst *nw);
void			ft_dlstpush(t_dlst **alst, t_dlst *nw);
void			ft_dlstiter(t_dlst *lst, void (*f)(t_dlst *elem));
t_dlst			*ft_dlstmap(t_dlst *lst, t_dlst *(*f)(t_dlst *elem));
t_dlst			*ft_dlstfilter(t_dlst *list, int (*f)(t_dlst *elem));
size_t			ft_dlstlen(const t_dlst *lst);
t_dlst			*ft_dlstfind(const t_dlst *lst,
		int (*f)(const void *content, const void *to_find),
		void *to_find);
t_dlst			*ft_dlstget(const t_dlst *lst, size_t idx);

#endif
