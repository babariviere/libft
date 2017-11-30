/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_fmts.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 12:52:06 by briviere          #+#    #+#             */
/*   Updated: 2017/11/30 22:35:21 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sort_fmts(t_fmt **fmts, size_t tab_idx,
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
