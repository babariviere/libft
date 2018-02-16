/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bufnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 11:07:53 by briviere          #+#    #+#             */
/*   Updated: 2018/02/16 11:08:30 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_buf.h"

t_buf		*ft_bufnew(size_t size)
{
	t_buf	*res;

	if ((res = ft_memalloc(sizeof(t_buf))) == 0)
		return (0);
	if ((res->data = ft_memalloc(sizeof(char *) * size)) == 0)
	{
		free(res);
		return (0);
	}
	res->allocated = size;
	res->len = 0;
	return (res);
}
