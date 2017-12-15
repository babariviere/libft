/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrepl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 15:51:33 by briviere          #+#    #+#             */
/*   Updated: 2017/12/15 15:54:54 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrepl(char *str, char *to_repl, char *with)
{
	char	*res;
	char	*tmp;
	size_t	to_repl_len;
	size_t	len;

	tmp = ft_strstr(str, to_repl);
	if (tmp == 0)
		return (ft_strdup(str));
	to_repl_len = ft_strlen(to_repl);
	len = ft_strlen(str) - to_repl_len + ft_strlen(with);
	if ((res = ft_strnew(len)) == 0)
		return (0);
	ft_strncpy(res, str, tmp - str);
	ft_strcat(res, with);
	ft_strcat(res, tmp + to_repl_len);
	return (res);
}
