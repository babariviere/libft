/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 17:03:15 by briviere          #+#    #+#             */
/*   Updated: 2017/11/28 09:46:21 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	**ft_join_tab(void **tab1, void **tab2)
{
	void	**res;
	size_t	tab1l;
	size_t	tab2l;

	if (tab1 == 0 || tab2 == 0)
		return (0);
	tab1l = ft_tablen(tab1);
	tab2l = ft_tablen(tab2);
	if ((res = malloc(sizeof(void *) * (tab1l + tab2l + 1))) == 0)
		return (0);
	ft_memcpy(res, tab1, tab1l);
	ft_memcpy(res + tab1l, tab2, tab2l);
	res[tab1l + tab2l] = 0;
	return (res);
}
