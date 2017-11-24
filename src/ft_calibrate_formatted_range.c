/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calibrate_formatted_range.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 09:46:12 by briviere          #+#    #+#             */
/*   Updated: 2017/11/24 10:23:45 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_calibrate_formatted_range(t_formatted **formatteds, size_t start,
		size_t end, size_t diff_idx)
{
	while (start <= end)
		ft_calibrate_formatted(formatteds, start++, diff_idx);
}
