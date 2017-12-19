/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 12:55:14 by briviere          #+#    #+#             */
/*   Updated: 2017/12/19 12:56:48 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

size_t		ft_strmax(char **strs)
{
	size_t	max;
	size_t	curr;
	size_t	idx;

	max = 0;
	idx = 0;
	while (strs[idx])
	{
		curr = ft_strlen(strs[idx]);
		if (curr > max)
			max = curr;
		idx++;
	}
	return (max);
}
