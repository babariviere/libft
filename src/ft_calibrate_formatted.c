/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calibrate_formatted.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 09:44:35 by briviere          #+#    #+#             */
/*   Updated: 2017/11/24 09:45:37 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_calibrate_formatted(t_formatted **formatteds, size_t tab_idx,
		size_t diff_idx)
{
	size_t	formatted_idx;
	size_t	longest;
	size_t	curr_len;

	formatted_idx = 0;
	longest = 0;
	while (formatteds[formatted_idx])
	{
		curr_len = ft_strlen(formatteds[formatted_idx]->tab[tab_idx]);
		if (curr_len > longest)
			longest = curr_len;
		formatted_idx++;
	}
	formatted_idx = 0;
	while (formatteds[formatted_idx])
	{
		formatteds[formatted_idx]->padding[tab_idx + diff_idx] +=
			longest - ft_strlen(formatteds[formatted_idx]->tab[tab_idx]);
		formatted_idx++;
	}
}
