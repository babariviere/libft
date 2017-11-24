/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdedup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 15:55:47 by briviere          #+#    #+#             */
/*   Updated: 2017/11/24 16:20:50 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strdedup(char **strs)
{
	size_t	idx;
	size_t	sub_idx;
	size_t	len;

	len = 0;
	while (strs[len])
		len++;
	idx = len - 1;
	while (idx < len)
	{
		sub_idx = idx - 1;
		while (sub_idx < idx)
		{
			if (ft_strcmp(strs[idx], strs[sub_idx--]))
				ft_strremove(strs, idx--);
		}
		idx--;
	}
}
