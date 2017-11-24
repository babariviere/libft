/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 17:03:15 by briviere          #+#    #+#             */
/*   Updated: 2017/11/24 17:18:02 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	**ft_join_tab(void **tab1, void **tab2)
{
	void	**res;
	size_t	tab1l;
	size_t	tab2l;
	size_t	idx;

	if (tab1 == 0 || tab2 == 0)
		return (0);
	tab1l = ft_tablen(tab1);
	tab2l = ft_tablen(tab2);
	if ((res = malloc(sizeof(void *) * (tab1l + tab2l + 1))) == 0)
		return (0);
	idx = 0;
	while (idx < tab1l)
	{
		res[idx] = tab1[idx];
		idx++;
	}
	idx = 0;
	while (idx + tab1l < tab2l)
	{
		res[idx + tab1l] = tab2[idx];
		idx++;
	}
	res[idx + tab1l] = 0;
	return (res);
}
