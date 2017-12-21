/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_geo.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 13:54:02 by briviere          #+#    #+#             */
/*   Updated: 2017/12/21 09:13:29 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GEO_H
# define FT_GEO_H

#include <string.h>

typedef struct	s_point {
	int		x;
	int		y;
}				t_point, t_pos;

typedef struct	s_rect {
	int		x;
	int		y;
	size_t	width;
	size_t	height;
}				t_rect;

#endif
