/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:20:27 by briviere          #+#    #+#             */
/*   Updated: 2017/11/10 13:18:31 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t		idx;
	size_t		len;
	char		*res;

	if (s == 0)
		return (0);
	len = ft_strlen(s);
	if ((res = ft_strnew(len)) == 0)
		return (0);
	idx = 0;
	while (idx < len)
	{
		res[idx] = f(idx, s[idx]);
		idx++;
	}
	return (res);
}
