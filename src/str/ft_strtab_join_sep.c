/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtab_join_sep.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 14:57:54 by briviere          #+#    #+#             */
/*   Updated: 2017/12/15 15:58:49 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtab_join_sep(char **tab, char sep)
{
	char	*res;
	char	sep_str[2];
	size_t	idx;
	size_t	len;

	if (tab == 0)
		return (0);
	len = ft_strtab_len(tab);
	if ((res = ft_strnew(len + ft_tablen(tab, sizeof(char *)) - 1)) == 0)
		return (0);
	idx = 0;
	sep_str[0] = sep;
	sep_str[1] = 0;
	while (tab[idx])
	{
		ft_strcat(res, tab[idx++]);
		if (tab[idx])
			ft_strcat(res, sep_str);
	}
	return (res);
}
