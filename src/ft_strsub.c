/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:36:00 by briviere          #+#    #+#             */
/*   Updated: 2017/11/10 13:56:14 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, t_uint start, size_t len)
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
