/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:24:00 by briviere          #+#    #+#             */
/*   Updated: 2017/11/10 15:24:44 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*node;

	if ((node = ft_memalloc(sizeof(t_list))) == 0)
		return (0);
	if (content == 0)
		content_size = 0;
	else
	{
		if ((node->content = ft_memalloc(content_size)) != 0)
			ft_memcpy(node->content, content, content_size);
	}
	node->content_size = content_size;
	node->next = 0;
	return (node);
}
