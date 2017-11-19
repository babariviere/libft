/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 17:31:34 by briviere          #+#    #+#             */
/*   Updated: 2017/11/17 17:34:22 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int	sqrt;
	int	tmp;

	if (nb < 0)
		return (-1);
	if (nb == 0)
		return (0);
	sqrt = 1;
	while (sqrt * sqrt < nb)
	{
		tmp = sqrt * 2;
		if (tmp > nb)
			return (sqrt);
		sqrt *= tmp;
	}
	return (sqrt);
}
