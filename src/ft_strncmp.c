/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:58:04 by briviere          #+#    #+#             */
/*   Updated: 2017/12/07 13:46:04 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			idx;
	const t_uchar	*s1_ptr;
	const t_uchar	*s2_ptr;

	if (n == 0)
		return (0);
	idx = 0;
	s1_ptr = (const t_uchar *)s1;
	s2_ptr = (const t_uchar *)s2;
	while (idx < n - 1 && s1_ptr[idx] == s2_ptr[idx])
	{
		if (s1_ptr[idx] == 0)
			break ;
		idx++;
	}
	return (s1_ptr[idx] - s2_ptr[idx]);
}
