/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_formatted.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 09:43:45 by briviere          #+#    #+#             */
/*   Updated: 2017/11/30 01:55:27 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_formatted(t_formatted *formatted)
{
	size_t	idx;

	idx = 0;
	while (idx < formatted->len && formatted->tab[idx])
	{
		ft_putstr(formatted->tab[idx]);
		ft_putchar_mul(' ', formatted->padding[idx]);
		idx++;
	}
}
