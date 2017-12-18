/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:26:21 by briviere          #+#    #+#             */
/*   Updated: 2017/11/21 14:27:05 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_put.h"

void	ft_putnbr_hex(int nb)
{
	ft_putstr("0x");
	ft_putnbr_base(nb, "0123456789abcdef");
}
