/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtab_join.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 14:49:34 by briviere          #+#    #+#             */
/*   Updated: 2017/12/15 15:58:40 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtab_join(char **tab)
{
	char	*res;
	size_t	idx;
	size_t	len;

	if (tab == 0)
		return (0);
	len = ft_strtab_len(tab);
	if ((res = ft_strnew(len)) == 0)
		return (0);
	idx = 0;
	while (tab[idx])
		ft_strcat(res, tab[idx++]);
	return (res);
}
