/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:24:00 by briviere          #+#    #+#             */
/*   Updated: 2017/12/08 17:02:43 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlst	*ft_dlstnew(const void *content, size_t content_size)
{
	t_dlst	*node;

	if ((node = malloc(sizeof(t_dlst))) == 0)
		return (0);
	if (content == 0)
		content_size = 0;
	else
	{
		if ((node->content = ft_memalloc(content_size)) != 0)
			ft_memcpy(node->content, content, content_size);
	}
	node->content_size = content_size;
	node->prev = 0;
	node->next = 0;
	return (node);
}
