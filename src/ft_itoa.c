/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 11:54:03 by briviere          #+#    #+#             */
/*   Updated: 2017/11/17 15:16:03 by briviere         ###   ########.fr       */
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
		if (n == FT_INT_MIN)
		{
			ft_strcpy(res, "-2147483648");
			return (0);
		}
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
