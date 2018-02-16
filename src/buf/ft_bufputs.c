/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bufputs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 11:10:29 by briviere          #+#    #+#             */
/*   Updated: 2018/02/16 11:11:02 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_buf.h"

void	ft_bufputs(t_buf *buf, char *s)
{
	size_t		len;

	if (s == 0)
		return ;
	len = 0;
	while (s[len])
	{
		if (s[len] == -1)
			s[len] = 0;
		len++;
	}
	while (buf->allocated <= (buf->len + len))
		ft_bufrealloc(buf, buf->allocated * 2);
	ft_strncpy(buf->data + buf->len, s, len);
	buf->len += len;
}
