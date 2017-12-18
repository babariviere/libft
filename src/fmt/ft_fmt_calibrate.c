/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmt_calibrate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 09:44:35 by briviere          #+#    #+#             */
/*   Updated: 2017/12/18 11:10:20 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_fmt_calibrate(t_fmt **fmts, size_t tab_idx,
		int diff_idx)
{
	size_t	fmt_idx;
	size_t	longest;
	size_t	curr_len;

	fmt_idx = 0;
	longest = 0;
	while (fmts[fmt_idx])
	{
		curr_len = ft_strlen(fmts[fmt_idx]->tab[tab_idx]);
		if (curr_len > longest)
			longest = curr_len;
		fmt_idx++;
	}
	fmt_idx = 0;
	while (fmts[fmt_idx])
	{
		fmts[fmt_idx]->padding[tab_idx + diff_idx] +=
			longest - ft_strlen(fmts[fmt_idx]->tab[tab_idx]);
		fmt_idx++;
	}
}
