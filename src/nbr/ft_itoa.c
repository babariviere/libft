/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 11:54:03 by briviere          #+#    #+#             */
/*   Updated: 2017/12/08 09:38:17 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_itoa_rec(char *res, int n)
{
	int		idx;

	idx = 0;
	if (n < 0)
	{
		res[idx] = '-';
		res++;
		n = -n;
	}
	if (n >= 10)
		idx = ft_itoa_rec(res, n / 10);
	res[idx++] = (n % 10) + '0';
	return (idx);
}

char			*ft_itoa(int n)
{
	char	*res;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if ((res = ft_strnew(ft_numlen(n))) == 0)
		return (0);
	ft_itoa_rec(res, n);
	return (res);
}
