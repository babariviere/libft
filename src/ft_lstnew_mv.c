/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_mv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:24:00 by briviere          #+#    #+#             */
/*   Updated: 2017/12/08 08:48:39 by briviere         ###   ########.fr       */
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
		node->content = (void *)content;
	node->content_size = content_size;
	node->next = 0;
	return (node);
}
