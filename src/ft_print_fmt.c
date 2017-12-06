/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_fmt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 09:43:45 by briviere          #+#    #+#             */
/*   Updated: 2017/12/06 09:47:32 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_fmt(t_fmt *fmt)
{
	size_t	idx;

	idx = 0;
	while (idx < fmt->len && fmt->tab[idx])
	{
		ft_putstr(fmt->tab[idx]);
		if (fmt->tab[idx + 1] && (idx + 1) < fmt->len)
			ft_putchar_mul(' ', fmt->padding[idx]);
		idx++;
	}
}
