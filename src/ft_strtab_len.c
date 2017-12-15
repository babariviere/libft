/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtab_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 14:50:48 by briviere          #+#    #+#             */
/*   Updated: 2017/12/15 15:58:57 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strtab_len(char **tab)
{
	size_t	idx;
	size_t	sidx;
	size_t	len;

	idx = 0;
	len = 0;
	while (tab[idx])
	{
		sidx = 0;
		while (tab[idx][sidx])
		{
			len++;
			sidx++;
		}
		idx++;
	}
	return (len);
}
