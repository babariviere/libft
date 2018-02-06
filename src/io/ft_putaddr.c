/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 16:07:13 by briviere          #+#    #+#             */
/*   Updated: 2018/02/06 16:22:31 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

static void		ft_putaddr_rec(size_t addr, int count)
{
	size_t	mod;

	if (count > 0)
		ft_putaddr_rec(addr / 16, count - 1);
	mod = addr % 16;
	if (mod >= 10)
		ft_putchar(mod + 'a' - 10);
	else
		ft_putchar(mod + '0');
}

void			ft_putaddr(void *addr)
{
	ft_putstr("0x");
	ft_putaddr_rec((size_t)addr, 12);
}
