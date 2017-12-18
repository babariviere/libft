/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmt_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 09:43:45 by briviere          #+#    #+#             */
/*   Updated: 2017/12/18 11:11:09 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_fmt_print(t_fmt *fmt)
{
	size_t	idx;

	idx = 0;
	while (idx < fmt->idx && fmt->tab[idx])
	{
		ft_putstr(fmt->tab[idx]);
		if (fmt->tab[idx + 1] && (idx + 1) < fmt->idx)
			ft_putchar_mul(' ', fmt->padding[idx]);
		idx++;
	}
}
