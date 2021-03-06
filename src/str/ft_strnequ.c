/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:28:10 by briviere          #+#    #+#             */
/*   Updated: 2017/11/10 15:29:11 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	if (s1 == 0 || s2 == 0 || n == 0)
		return (1);
	return (ft_strncmp(s1, s2, n) == 0);
}
