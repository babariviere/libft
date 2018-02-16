/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 11:05:31 by briviere          #+#    #+#             */
/*   Updated: 2018/02/16 11:12:33 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BUF_H
# define FT_BUF_H

# include "ft_mem.h"
# include "ft_str.h"

typedef struct	s_buf {
	char	*data;
	size_t	len;
	size_t	allocated;
}				t_buf;

t_buf			*ft_bufnew(size_t size);
void			ft_bufputc(t_buf *buf, char c);
void			ft_bufputs(t_buf *buf, char *s);
void			ft_bufrealloc(t_buf *buf, size_t nw_size);
void			ft_bufdel(t_buf **buf);

#endif
