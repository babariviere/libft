/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:36:00 by briviere          #+#    #+#             */
/*   Updated: 2017/12/11 12:12:12 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char	*ft_strsub(const char *s, size_t start, size_t len)
{
	char	*res;
	size_t	idx;
	size_t	end;

	if (s == 0)
		return (0);
	if ((res = ft_strnew(len)) == 0)
		return (0);
	idx = 0;
	end = start + len;
	while (start < end)
		res[idx++] = s[start++];
	return (res);
}
