/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_formatted.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 09:43:45 by briviere          #+#    #+#             */
/*   Updated: 2017/11/30 21:25:55 by briviere         ###   ########.fr       */
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
		if (formatted->tab[idx + 1])
			ft_putchar_mul(' ', formatted->padding[idx]);
		idx++;
	}
}
