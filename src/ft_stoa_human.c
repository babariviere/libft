/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stoa_human.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 10:38:40 by briviere          #+#    #+#             */
/*   Updated: 2017/12/01 02:17:55 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_stoa_human_sub(float nb)
{
	int		intpart;
	int		fracpart;
	char	*nbr_str;
	char	*frac_str;
	char	*tmp_str;

	intpart = (int)nb;
	fracpart = (int)(nb * 100 - intpart * 100);
	if (fracpart == 0)
		return (ft_itoa(nb));
	fracpart = (fracpart / 10) + ((fracpart % 10) >= 5);
	nb += ((fracpart % 10) == 0);
	if (nb >= 10)
		return (ft_itoa(nb));
	nbr_str = ft_itoa(nb);
	frac_str = ft_itoa(fracpart % 10);
	tmp_str = ft_strjoin(nbr_str, ".");
	free(nbr_str);
	nbr_str = ft_strjoin(tmp_str, frac_str);
	free(tmp_str);
	return (nbr_str);
}

char		*ft_stoa_human(size_t nb, int into_bytes)
{
	char	*nb_str;
	char	*tmp;
	char	metric[2];
	float	thresh;
	float	res;

	if (into_bytes)
		metric[0] = ft_human_metric_bin(nb);
	else
		metric[0] = ft_human_metric_dec(nb);
	metric[1] = 0;
	res = nb;
	thresh = (into_bytes ? 1024 : 1000);
	while (res >= thresh)
		res /= thresh;
	tmp = ft_stoa_human_sub(res);
	nb_str = ft_strjoin(tmp, ft_strdup(metric));
	free(tmp);
	return (nb_str);
}
