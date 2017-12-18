/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 09:12:59 by briviere          #+#    #+#             */
/*   Updated: 2017/12/12 09:16:33 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

void	*ft_realloc(void *ptr, size_t prev_size, size_t new_size)
{
	void	*dst;

	if ((dst = malloc(new_size)) == 0)
	{
		free(ptr);
		return (0);
	}
	ft_memcpy(dst, ptr, prev_size);
	free(ptr);
	return (dst);
}
