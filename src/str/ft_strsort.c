/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 15:53:02 by briviere          #+#    #+#             */
/*   Updated: 2017/11/24 16:49:00 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strsort(char **strs, int (*cmp)(const char *, const char *))
{
	size_t	idx;
	size_t	sub_idx;

	idx = 0;
	while (strs[idx] && strs[idx + 1])
	{
		sub_idx = idx + 1;
		while (strs[sub_idx])
		{
			if (cmp(strs[idx], strs[sub_idx]) > 0)
				ft_swap_ptr((void **)(strs + idx), (void **)(strs + sub_idx));
			sub_idx++;
		}
		idx++;
	}
}
