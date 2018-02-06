/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_mul.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 13:00:09 by briviere          #+#    #+#             */
/*   Updated: 2018/02/06 19:20:51 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

void	ft_putchar_mul(char c, size_t count)
{
	char	tab[count];
	size_t	idx;

	idx = 0;
	while (idx < count)
		tab[idx++] = c;
	(void)write(1, tab, count);
}
