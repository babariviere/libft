/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_fmt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 09:16:01 by briviere          #+#    #+#             */
/*   Updated: 2017/11/30 21:35:59 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_fmt		*ft_init_fmt(size_t len)
{
	t_fmt	*fmt;

	if ((fmt = ft_memalloc(sizeof(t_fmt))) == 0)
		return (0);
	(fmt)->len = len;
	if ((fmt->tab =
			ft_memalloc(sizeof(char *) * fmt->len)) == 0)
		return (0);
	if ((fmt->padding =
			ft_memalloc(sizeof(int) * fmt->len)) == 0)
		return (0);
	fmt->padding[fmt->len - 1] = 0;
	fmt->idx = 0;
	return (fmt);
}
