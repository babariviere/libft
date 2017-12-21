/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 15:46:48 by briviere          #+#    #+#             */
/*   Updated: 2017/12/21 16:30:22 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

int		ft_putwchar(wchar_t uni)
{
	wchar_t	res;

	if (uni <= 0x7f)
		return (write(1, &uni, 1));
	res = ((uni & 0b00111111) | 0b10000000);
	if (uni > 0x7f && uni <= 0x7ff)
	{
		res = (res << 8) | ((uni & (0b00111111 << 6)) >> 6 | 0b11000000);
		return (write(1, &res, 2));
	}
	res = (res << 8) | ((uni & (0b00111111 << 6)) >> 6 | 0b10000000);
	if (uni > 0x7ff && uni <= 0x7fff)
	{
		res = (res << 8) | ((uni & (0b00111111 << 12)) >> 12 | 0b11100000);
		return (write(1, &res, 3));
	}
	res = (res << 8) | ((uni & (0b00111111 << 12)) >> 12 | 0b10000000);
	res = (res << 8) | ((uni & (0b00111111 << 18)) >> 18 | 0b11110000);
	ft_putnbr_bin(res);
	return (write(1, &res, 4));
}
