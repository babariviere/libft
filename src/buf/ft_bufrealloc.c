/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bufrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 11:11:11 by briviere          #+#    #+#             */
/*   Updated: 2018/02/16 11:12:46 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_buf.h"

void	ft_bufrealloc(t_buf *buf, size_t nw_size)
{
	if (buf->allocated >= nw_size)
		return ;
	buf->data = ft_realloc(buf->data, buf->allocated, nw_size);
	buf->allocated = nw_size;
}
