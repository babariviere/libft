/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:58:04 by briviere          #+#    #+#             */
/*   Updated: 2017/12/14 13:40:48 by briviere         ###   ########.fr       */
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
	return (*(const uint8_t *)s1 - *(const uint8_t *)s2);
}
