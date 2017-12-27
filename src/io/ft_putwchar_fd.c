/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 15:46:48 by briviere          #+#    #+#             */
/*   Updated: 2017/12/27 09:49:59 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

int		ft_putwchar_fd(int fd, wchar_t uni)
{
	wchar_t	res;

	if (uni <= 0x7f)
		return (write(fd, &uni, 1));
	res = ((uni & 0b00111111) | 0b10000000);
	if (uni > 0x7f && uni <= 0x7ff)
	{
		res = (res << 8) | ((uni & (0b00111111 << 6)) >> 6 | 0b11000000);
		return (write(fd, &res, 2));
	}
	res = (res << 8) | ((uni & (0b00111111 << 6)) >> 6 | 0b10000000);
	if (uni > 0x7ff && uni <= 0x7fff)
	{
		res = (res << 8) | ((uni & (0b00111111 << 12)) >> 12 | 0b11100000);
		return (write(fd, &res, 3));
	}
	res = (res << 8) | ((uni & (0b00111111 << 12)) >> 12 | 0b10000000);
	res = (res << 8) | ((uni & (0b00111111 << 18)) >> 18 | 0b11110000);
	return (write(fd, &res, 4));
}
