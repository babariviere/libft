/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_mr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 15:57:55 by briviere          #+#    #+#             */
/*   Updated: 2017/12/21 09:18:53 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

char	*ft_term_mr(char **termbuf)
{
	static char	*mr;
	
	if (termbuf)
		mr = tgetstr("mr", termbuf);
	return (mr);
}
