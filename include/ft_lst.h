/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:46:16 by briviere          #+#    #+#             */
/*   Updated: 2018/02/16 09:50:11 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LST_H
# define FT_LST_H

# include "ft_mem.h"
# include <string.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_lst;

t_lst			*ft_lstnew(const void *content, size_t content_size);
t_lst			*ft_lstnew_mv(const void *content, size_t content_size);
void			ft_lstdelone(t_lst **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_lst **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_lst **alst, t_lst *nw);
void			ft_lstpush(t_lst **alst, t_lst *nw);
void			ft_lstiter(t_lst *lst, void (*f)(t_lst *elem));
t_lst			*ft_lstmap(t_lst *lst, t_lst *(*f)(t_lst *elem));
t_lst			*ft_lstfilter(t_lst *lst, int (*f)(t_lst *elem));
size_t			ft_lstlen(const t_lst *lst);
t_lst			*ft_lstfind(const t_lst *lst,
		int (*f)(const void *content, const void *to_find),
		void *to_find);
t_lst			*ft_lstget(const t_lst *lst, size_t idx);

void			ft_lstdel_def(void *content, size_t size);

#endif
