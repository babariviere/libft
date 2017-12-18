/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:54:36 by briviere          #+#    #+#             */
/*   Updated: 2017/11/08 09:50:35 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		idx;
	size_t		len;
	char		byte;

	len = ft_strlen(s);
	idx = len;
	byte = c;
	while (idx <= len)
	{
		if (s[idx] == byte)
			return ((char *)s + idx);
		idx--;
	}
	return (0);
}
