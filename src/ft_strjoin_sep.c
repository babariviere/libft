/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_sep.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 11:43:51 by briviere          #+#    #+#             */
/*   Updated: 2017/12/06 11:45:11 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_sep(const char *s1, const char *sep, const char *s2)
{
	char	*res;
	size_t	idx;
	size_t	sub_idx;
	size_t	len;

	if (s1 == 0 || s2 == 0 || sep == 0)
		return (0);
	len = ft_strlen(s1) + ft_strlen(sep) + ft_strlen(s2);
	if ((res = ft_strnew(len)) == 0)
		return (0);
	idx = 0;
	sub_idx = 0;
	while (s1[sub_idx] != 0)
		res[idx++] = s1[sub_idx++];
	sub_idx = 0;
	while (sep[sub_idx] != 0)
		res[idx++] = sep[sub_idx++];
	sub_idx = 0;
	while (s2[sub_idx] != 0)
		res[idx++] = s2[sub_idx++];
	return (res);
}
