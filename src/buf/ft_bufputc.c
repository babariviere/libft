/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bufputc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 11:09:38 by briviere          #+#    #+#             */
/*   Updated: 2018/02/16 11:10:19 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_buf.h"

void	ft_bufputc(t_buf *buf, char c)
{
	if (buf->allocated <= (buf->len + 1))
		ft_bufrealloc(buf, buf->allocated * 2);
	buf->data[buf->len++] = c;
}
