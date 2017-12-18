/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmts_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 12:52:06 by briviere          #+#    #+#             */
/*   Updated: 2017/12/18 11:11:20 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fmt.h"

void	ft_fmts_sort(t_fmt **fmts, size_t tab_idx,
		int (*cmp)(const char *, const char *))
{
	size_t	idx;
	size_t	sub_idx;

	idx = 0;
	while (fmts[idx] && fmts[idx + 1])
	{
		sub_idx = idx + 1;
		while (fmts[sub_idx])
		{
			if (cmp(fmts[idx]->tab[tab_idx],
						fmts[sub_idx]->tab[tab_idx]) > 0)
				ft_swap_ptr((void **)(fmts + idx),
						(void **)(fmts + sub_idx));
			sub_idx++;
		}
		idx++;
	}
}
