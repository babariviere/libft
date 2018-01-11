/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join_path.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 13:46:38 by briviere          #+#    #+#             */
/*   Updated: 2018/01/11 14:34:11 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fs.h"

static size_t	ft_next_len(const char *relative)
{
	char	*tmp;

	tmp = ft_strchr(relative, '/');
	if (tmp == 0)
		return (ft_strlen(relative));
	return (tmp - relative);
}

static void		ft_go_up(char **res)
{
	char	*base;
	char	*tmp;
	size_t	len_base;
	size_t	len_res;

	base = ft_basename(*res);
	len_base = ft_strlen(base);
	len_res = ft_strlen(*res);
	if (len_res == 1)
		return ;
	tmp = ft_strndup(*res, len_res - len_base - ((*res)[len_res - 1] == '/'));
	ft_strdel(res);
	*res = tmp;
}

static char		*ft_concat_path(char **res, const char *path)
{
	char	*tmp;
	size_t	len;

	len = ft_strlen(*res);
	tmp = *res;
	if (tmp[len - 1] == '/' || path[ft_strlen(path) - 1] == '/')
		*res = ft_strjoin(*res, path);
	else
		*res = ft_strjoin_sep(*res, '/', path);
	free(tmp);
	return (*res);
}

char			*ft_join_path(const char *path, const char *relative)
{
	char	*res;
	size_t	idx;
	size_t	len;
	size_t	len_r;

	if (relative[0] == '/')
		return (ft_strjoin(path, relative));
	idx = 0;
	len_r = ft_strlen(relative);
	res = ft_strdup(path);
	while (idx < len_r)
	{
		len = ft_next_len(relative + idx);
		if (len == 1 && ft_strncmp(relative + idx, ".", len) == 0)
			idx += 2;
		else if (len == 2 && ft_strncmp(relative + idx, "..", len) == 0)
		{
			idx += 3;
			ft_go_up(&res);
		}
		else
			return (ft_concat_path(&res, relative + idx));
	}
	return (res);
}
