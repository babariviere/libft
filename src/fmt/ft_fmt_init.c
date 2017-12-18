/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmt_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 09:16:01 by briviere          #+#    #+#             */
/*   Updated: 2017/12/18 11:10:57 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fmt.h"

t_fmt		*ft_fmt_init(size_t len)
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
