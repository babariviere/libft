/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:44:26 by briviere          #+#    #+#             */
/*   Updated: 2017/11/10 13:56:40 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	size_t	start;
	size_t	end;

	if (s == 0)
		return (0);
	start = 0;
	end = ft_strlen(s) - 1;
	while (start < end && ft_iswhitespace(s[start]))
		start++;
	if (start == end)
		return (ft_strnew(0));
	while (ft_iswhitespace(s[end]))
		end--;
	return (ft_strsub(s, start, end - start + 1));
}
