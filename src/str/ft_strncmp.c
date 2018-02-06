/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:58:04 by briviere          #+#    #+#             */
/*   Updated: 2018/02/06 19:24:37 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n && *s1 == *s2)
	{
		if (*s1 == 0)
			break ;
		n--;
		s1++;
		s2++;
	}
	if (n == 0)
		return (0);
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
