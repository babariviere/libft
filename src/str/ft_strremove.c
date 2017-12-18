/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strremove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 16:34:37 by briviere          #+#    #+#             */
/*   Updated: 2017/11/24 16:48:31 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strremove(char **strs, size_t idx)
{
	size_t	sub_idx;

	sub_idx = idx + 1;
	while (strs[sub_idx])
		ft_swap_ptr((void **)(strs + idx++), (void **)(strs + sub_idx++));
	ft_strdel(strs + sub_idx);
}
