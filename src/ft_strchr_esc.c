/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_esc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 13:05:44 by briviere          #+#    #+#             */
/*   Updated: 2017/12/13 09:38:09 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr_esc(const char *str, char c)
{
	if (str == 0)
		return (0);
	while (*str && *str != c)
	{
		if (*str == '\\' && *(str + 1))
			str++;
		str++;
	}
	if (*str == 0 && c != 0)
		return (0);
	return ((char *)str);
}
