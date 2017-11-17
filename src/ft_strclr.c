/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 09:40:23 by briviere          #+#    #+#             */
/*   Updated: 2017/11/10 13:17:28 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	size_t	idx;
	size_t	len;

	if (s == 0)
		return ;
	len = ft_strlen(s);
	idx = 0;
	while (idx < len)
		s[idx++] = 0;
}
