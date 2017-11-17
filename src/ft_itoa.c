/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 11:54:03 by briviere          #+#    #+#             */
/*   Updated: 2017/11/10 14:46:04 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_itoa_rec(char *res, int n)
{
	int		idx;
	int		neg;

	idx = 0;
	neg = 0;
	if (n < 0)
	{
		res[idx] = '-';
		res++;
		if (n % 10 != 0)
		{
			neg = 1;
			n = -(n + 1);
		}
		else
			n = -n;
	}
	if (n >= 10)
		idx = ft_itoa_rec(res, n / 10);
	res[idx++] = (n % 10) + '0' + neg;
	return (idx);
}

char			*ft_itoa(int n)
{
	char	*res;
	size_t	len;
	int		tmp;

	len = 1;
	tmp = n;
	if (n < 0)
	{
		len++;
		tmp = -tmp;
	}
	while (tmp >= 10)
	{
		tmp /= 10;
		len++;
	}
	if ((res = ft_strnew(len)) == 0)
		return (0);
	ft_itoa_rec(res, n);
	return (res);
}
