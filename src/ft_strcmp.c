/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:57:07 by briviere          #+#    #+#             */
/*   Updated: 2017/12/07 13:45:24 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	const t_uchar	*s1ptr;
	const t_uchar	*s2ptr;

	s1ptr = (const t_uchar *)s1;
	s2ptr = (const t_uchar *)s2;
	while (*s1ptr == *s2ptr)
	{
		if (*s1ptr == 0)
			break ;
		s1ptr++;
		s2ptr++;
	}
	return (*s1ptr - *s2ptr);
}
