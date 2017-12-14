/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calibrate_fmt_range.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 09:46:12 by briviere          #+#    #+#             */
/*   Updated: 2017/12/14 11:12:25 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_calibrate_fmt_range(t_fmt **fmts, size_t start,
		size_t end, int diff_idx)
{
	while (start <= end)
		ft_calibrate_fmt(fmts, start++, diff_idx);
}
