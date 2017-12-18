/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 09:28:18 by briviere          #+#    #+#             */
/*   Updated: 2017/12/15 09:31:38 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

void	ft_tabdel(void ***tabptr, size_t elem_size)
{
	size_t	idx;
	size_t	len;
	char	**tab;

	tab = (char **)*tabptr;
	len = ft_tablen(tab, elem_size);
	idx = 0;
	while (idx < len)
		free(tab[idx++]);
	free(tab);
	*tabptr = 0;
}
