/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmt_calibrate_range.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 09:46:12 by briviere          #+#    #+#             */
/*   Updated: 2017/12/18 11:10:31 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fmt.h"

void	ft_fmt_calibrate_range(t_fmt **fmts, size_t start,
		size_t end, int diff_idx)
{
	while (start <= end)
		ft_calibrate_fmt(fmts, start++, diff_idx);
}
