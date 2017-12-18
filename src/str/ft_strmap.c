/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:18:23 by briviere          #+#    #+#             */
/*   Updated: 2017/11/10 13:18:43 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	size_t	idx;
	size_t	len;
	char	*res;

	if (s == 0)
		return (0);
	len = ft_strlen(s);
	if ((res = ft_strnew(len)) == 0)
		return (0);
	idx = 0;
	while (idx < len)
	{
		res[idx] = f(s[idx]);
		idx++;
	}
	return (res);
}
