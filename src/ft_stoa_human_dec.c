/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stoa_human_dec.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 10:38:40 by briviere          #+#    #+#             */
/*   Updated: 2017/12/01 00:43:33 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_stoa_human_dec_sub(size_t nb, size_t dec)
{
	char	*nbr_str;
	char	*dec_str;
	char	*tmp_str;

	nbr_str = ft_itoa(nb);
	if (nb < 10 && dec >= 1000)
		return (nbr_str);
	dec_str = ft_itoa((dec / 100) % 10);
	tmp_str = ft_strjoin(nbr_str, ".");
	free(nbr_str);
	nbr_str = ft_strjoin(tmp_str, dec_str);
	free(tmp_str);
	return (nbr_str);
}

char		*ft_stoa_human_dec(size_t nb)
{
	char	*nb_str;
	char	*tmp;
	char	metric[2];
	size_t	prev;

	metric[0] = ft_human_metric_dec(nb);
	metric[1] = 0;
	prev = 0;
	while (nb >= 1000)
	{
		prev = nb;
		nb /= 1000;
	}
	tmp = ft_stoa_human_dec_sub(nb, prev);
	nb_str = ft_strjoin(tmp, ft_strdup(metric));
	free(tmp);
	return (nb_str);
}
