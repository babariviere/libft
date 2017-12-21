/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:21:11 by briviere          #+#    #+#             */
/*   Updated: 2017/12/21 15:32:54 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

static int		ft_is_base_valid(char *base)
{
	int idx;
	int sub_idx;

	idx = 0;
	while (base[idx] != 0)
	{
		sub_idx = idx + 1;
		if (base[idx] == '+' || base[idx] == '-')
			return (0);
		while (base[sub_idx] != 0)
		{
			if (base[idx] == base[sub_idx])
				return (0);
			sub_idx++;
		}
		idx++;
	}
	if (idx <= 1)
		return (0);
	return (1);
}

static void		ft_putnbr_base_inner(unsigned int nb, unsigned int base_len,
		char *base)
{
	if (nb >= base_len)
		ft_putnbr_base_inner(nb / base_len, base_len, base);
	ft_putchar(base[nb % base_len]);
}

void			ft_putnbr_base(int nb, char *base)
{
	unsigned long	nb_long;
	unsigned long	base_len;

	nb_long = nb;
	if (!ft_is_base_valid(base))
		return ;
	base_len = ft_strlen(base);
	if (nb < 0 && base_len == 10)
	{
		nb_long = nb * -1;
		ft_putchar('-');
	}
	ft_putnbr_base_inner(nb_long, base_len, base);
}
