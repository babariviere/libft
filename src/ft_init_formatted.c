/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_formatted.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 09:16:01 by briviere          #+#    #+#             */
/*   Updated: 2017/11/24 09:40:57 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_formatted		*ft_init_formatted(size_t len)
{
	t_formatted	*formatted;

	if ((formatted = ft_memalloc(sizeof(t_formatted))) == 0)
		return (0);
	(formatted)->len = len;
	if ((formatted->tab =
			ft_memalloc(sizeof(char *) * formatted->len)) == 0)
		return (0);
	if ((formatted->padding =
			ft_memalloc(sizeof(int) * formatted->len)) == 0)
		return (0);
	formatted->padding[formatted->len - 1] = 0;
	formatted->idx = 0;
	return (formatted);
}
