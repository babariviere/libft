/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:58:04 by briviere          #+#    #+#             */
/*   Updated: 2017/12/14 13:36:28 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n-- && *s1 == *s2)
	{
		if (*s1 == 0)
			break ;
		s1++;
		s2++;
	}
	if (n == 0)
		return (0);
	return (*(const t_uchar *)s1 - *(const t_uchar *)s2);
}
