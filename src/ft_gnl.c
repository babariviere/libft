/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:14:40 by briviere          #+#    #+#             */
/*   Updated: 2017/11/23 13:01:07 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_gnl.h"

static t_buf_tracker	*add_buf_tracker(t_list **alst, const int fd)
{
	t_list			*node;
	t_buf_tracker	*bt;

	if ((bt = ft_memalloc(sizeof(t_buf_tracker))) == 0)
		return (0);
	bt->fd = fd;
	bt->is_eof = 0;
	if ((bt->buf = ft_strnew(0)) == 0)
		return (0);
	bt->buf_len = 1;
	bt->idx = 0;
	if ((node = ft_lstnew(bt, sizeof(t_buf_tracker))) == 0)
		return (0);
	free(bt);
	ft_lstadd(alst, node);
	return (node->content);
}

static t_buf_tracker	*find_fd_tracker_or_add(t_list **lst, const int fd)
{
	t_buf_tracker	*tmp;
	t_list			*lst_tmp;

	lst_tmp = *lst;
	while (lst_tmp)
	{
		tmp = lst_tmp->content;
		if (tmp->fd == fd)
			return (tmp);
		lst_tmp = lst_tmp->next;
	}
	return (add_buf_tracker(lst, fd));
}

static int				read_fd_to_buf(const int fd, t_buf_tracker *bt)
{
	char	*tmp;
	char	*old_buf;
	size_t	readed;

	if (fd < 0)
		return (0);
	if ((tmp = ft_strnew(BUFF_SIZE)) == 0)
		return (0);
	readed = read(fd, tmp, BUFF_SIZE);
	if ((int)readed == -1)
		return (0);
	if (readed < BUFF_SIZE)
		bt->is_eof = 1;
	old_buf = bt->buf;
	bt->buf_len += readed;
	if ((bt->buf = ft_strnew(bt->buf_len)) == 0)
		return (0);
	if (old_buf)
	{
		ft_strcat(bt->buf, old_buf);
		ft_strdel(&old_buf);
	}
	ft_strcat(bt->buf, tmp);
	ft_strdel(&tmp);
	return (1);
}

int						free_buf_tracker_fd(const int fd, t_list **holder)
{
	t_buf_tracker	*tmp;
	t_list			*lst;
	t_list			*lst_prev;

	lst = *holder;
	lst_prev = lst;
	while (lst)
	{
		tmp = lst->content;
		if (tmp->fd == fd)
			break ;
		lst_prev = lst;
		lst = lst->next;
	}
	if (lst == 0)
		return (0);
	if (lst_prev != lst)
		lst_prev->next = lst->next;
	if (*holder == lst)
		*holder = lst->next;
	if (tmp->buf)
		ft_strdel(&tmp->buf);
	ft_memdel((void **)&lst->content);
	ft_memdel((void **)&lst);
	return (0);
}

int						ft_gnl(const int fd, char **line)
{
	static t_list	*holder;
	t_buf_tracker	*bt;
	char			*tmp;
	size_t			len;

	if (fd < 0 || line == 0)
		return (-1);
	if ((bt = find_fd_tracker_or_add(&holder, fd)) == 0)
		return (-1);
	while ((tmp = ft_strchr(bt->buf + bt->idx, '\n')) == 0 && !bt->is_eof)
		if (read_fd_to_buf(fd, bt) == 0)
			return (-1);
	len = tmp - (bt->buf + bt->idx);
	if (tmp == 0 && bt->is_eof)
	{
		if ((len = ft_strlen(bt->buf + bt->idx)) == 0)
			return (free_buf_tracker_fd(fd, &holder));
	}
	else if (tmp == 0 && !bt->is_eof)
		return (-1);
	*line = ft_strsub(bt->buf, bt->idx, len);
	bt->idx += len + 1;
	if (bt->idx + 1 >= bt->buf_len && bt->is_eof == 1)
		free_buf_tracker_fd(fd, &holder);
	return (1);
}
