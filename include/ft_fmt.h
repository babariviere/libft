/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:48:29 by briviere          #+#    #+#             */
/*   Updated: 2017/12/18 16:56:50 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FMT_H
# define FT_FMT_H

# include "ft_mem.h"
# include "ft_put.h"
# include "ft_str.h"
# include <string.h>

typedef struct	s_fmt {
	char	**tab;
	int		*padding;
	size_t	idx;
	size_t	len;
}				t_fmt;

t_fmt			*ft_init_fmt(size_t len);
void			ft_add_fmt_str(t_fmt *fmt,
		char *str, int next_padding);
void			ft_print_fmt(t_fmt *fmt);
void			ft_calibrate_fmt(t_fmt **fmts,
		size_t tab_idx, int diff_idx);
void			ft_calibrate_fmt_range(t_fmt **fmts,
		size_t start, size_t end, int diff_idx);
void			ft_sort_fmts(t_fmt **fmts, size_t tab_idx,
		int (*cmp)(const char *, const char *));
void			ft_free_fmt(t_fmt **fmt);

#endif
