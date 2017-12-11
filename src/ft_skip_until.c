/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_until.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 13:05:44 by briviere          #+#    #+#             */
/*   Updated: 2017/12/11 13:12:59 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_skip_until(const char *str, char c)
{
	size_t		idx;

	if (str == 0)
		return (0);
	idx = 0;
	while (str[idx] && str[idx] != c)
	{
		if (str[idx] == '\\' && str[idx + 1])
			idx++;
		idx++;
	}
	return (idx);
}
