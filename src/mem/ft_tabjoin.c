/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 17:03:15 by briviere          #+#    #+#             */
/*   Updated: 2017/12/12 09:02:03 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_tabjoin(const void *tab1, const void *tab2, size_t elem_size)
{
	void	**res;
	size_t	tab1l;
	size_t	tab2l;

	if (tab1 == 0 || tab2 == 0)
		return (0);
	tab1l = ft_tablen(tab1, elem_size);
	tab2l = ft_tablen(tab2, elem_size);
	if ((res = malloc(elem_size * (tab1l + tab2l + 1))) == 0)
		return (0);
	ft_memcpy(res, tab1, tab1l * elem_size);
	ft_memcpy(res + tab1l, tab2, tab2l * elem_size);
	res[tab1l + tab2l] = 0;
	return (res);
}
