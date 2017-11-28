/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 17:05:33 by briviere          #+#    #+#             */
/*   Updated: 2017/11/28 10:03:14 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_tablen(const void *tab, size_t elem)
{
	size_t	len;

	len = 0;
	while (*(char *)(tab + (len * elem)))
		len++;
	return (len);
}
