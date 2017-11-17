/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:40:41 by briviere          #+#    #+#             */
/*   Updated: 2017/11/10 13:56:26 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*res;
	size_t	idx;
	size_t	sub_idx;
	size_t	len;

	if (s1 == 0 || s2 == 0)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	if ((res = ft_strnew(len)) == 0)
		return (0);
	idx = 0;
	sub_idx = 0;
	while (s1[sub_idx] != 0)
		res[idx++] = s1[sub_idx++];
	sub_idx = 0;
	while (s2[sub_idx] != 0)
		res[idx++] = s2[sub_idx++];
	return (res);
}
