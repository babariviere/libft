/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_formatted.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 10:03:00 by briviere          #+#    #+#             */
/*   Updated: 2017/11/24 10:15:30 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_formatted(t_formatted **formatted)
{
	t_formatted	*tmp;

	if (formatted == 0 || *formatted == 0)
		return ;
	tmp = *formatted;
	tmp->idx = 0;
	while (tmp->idx < tmp->len)
		ft_strdel(&tmp->tab[tmp->idx++]);
	ft_memdel((void **)&tmp->padding);
	ft_memdel((void **)formatted);
}
