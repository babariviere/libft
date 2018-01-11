/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basename.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 13:42:18 by briviere          #+#    #+#             */
/*   Updated: 2018/01/11 14:03:53 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fs.h"

char	*ft_basename(const char *path)
{
	int		idx;
	size_t	len;

	len = ft_strlen(path);
	idx = len - 1;
	if (len == 1)
		return (ft_strdup(path));
	if (path[idx] == '/')
	{
		len--;
		idx--;
	}
	while (idx >= 0 && path[idx] != '/')
		idx--;
	if (idx < 0 || path[idx] != '/')
		return (ft_strndup(path, len));
	idx++;
	return (ft_strndup(path + idx, len - idx));
}
