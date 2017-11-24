/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stoa_human_dec.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 10:38:40 by briviere          #+#    #+#             */
/*   Updated: 2017/11/24 10:49:17 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_stoa_human_dec(size_t nb)
{
	char	metric[2];

	metric[0] = ft_human_metric_dec(nb);
	metric[1] = 0;
	while (nb >= 1000)
		nb /= 1000;
	return (ft_strjoin(ft_itoa((int) nb), ft_strdup(metric)));
}
