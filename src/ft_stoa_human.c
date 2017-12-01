/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stoa_human.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 10:38:40 by briviere          #+#    #+#             */
/*   Updated: 2017/12/01 02:02:06 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_stoa_human_sub(size_t nb, size_t dec, size_t thresh)
{
	char	*nbr_str;
	char	*dec_str;
	char	*tmp_str;

	if (dec == 0)
		return (ft_itoa(nb));
	dec = dec / 100 + ((dec / 10) >= 5);
	nb += ((dec % 10) == 0);
	if (nb >= 10)
		return (ft_itoa(nb));
	nbr_str = ft_itoa(nb);
	dec_str = ft_itoa(dec % 10);
	tmp_str = ft_strjoin(nbr_str, ".");
	free(nbr_str);
	nbr_str = ft_strjoin(tmp_str, dec_str);
	free(tmp_str);
	return (nbr_str);
}

char		*ft_stoa_human(size_t nb, int into_bytes)
{
	char	*nb_str;
	char	*tmp;
	char	metric[2];
	size_t	prev;
	size_t	thresh;

	if (into_bytes)
		metric[0] = ft_human_metric_bin(nb);
	else
		metric[0] = ft_human_metric_dec(nb);
	metric[1] = 0;
	prev = 0;
	thresh = (into_bytes ? 1024 : 1000);
	while (nb >= thresh)
	{
		prev = nb;
		nb /= thresh;
	}
	tmp = ft_stoa_human_sub(nb, prev, thresh);
	nb_str = ft_strjoin(tmp, ft_strdup(metric));
	free(tmp);
	return (nb_str);
}
