/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_formatteds.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 12:52:06 by briviere          #+#    #+#             */
/*   Updated: 2017/11/24 12:58:43 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sort_formatteds(t_formatted **formatteds, size_t tab_idx,
		int (*cmp)(char *, char *))
{
	size_t	idx;
	size_t	sub_idx;

	idx = 0;
	while (formatteds[idx] && formatteds[idx + 1])
	{
		sub_idx = idx + 1;
		while (formatteds[sub_idx])
		{
			if (cmp(formatteds[idx]->tab[tab_idx],
						formatteds[sub_idx]->tab[tab_idx]) > 0)
				ft_swap_ptr((void **)(formatteds + idx),
						(void **)(formatteds + sub_idx));
			sub_idx++;
		}
		idx++;
	}
}
