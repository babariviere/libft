/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_fmt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 10:03:00 by briviere          #+#    #+#             */
/*   Updated: 2017/11/30 21:36:05 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_fmt(t_fmt **fmt)
{
	t_fmt	*tmp;

	if (fmt == 0 || *fmt == 0)
		return ;
	tmp = *fmt;
	tmp->idx = 0;
	while (tmp->idx < tmp->len)
		ft_strdel(&tmp->tab[tmp->idx++]);
	ft_memdel((void **)&tmp->padding);
	ft_memdel((void **)fmt);
}