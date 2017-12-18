/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnew_mv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:24:00 by briviere          #+#    #+#             */
/*   Updated: 2017/12/08 17:02:02 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlst.h"

t_dlst	*ft_dlstnew_mv(const void *content, size_t content_size)
{
	t_dlst	*node;

	if ((node = malloc(sizeof(t_dlst))) == 0)
		return (0);
	if (content == 0)
		content_size = 0;
	else
		node->content = (void *)content;
	node->content_size = content_size;
	node->prev = 0;
	node->next = 0;
	return (node);
}
