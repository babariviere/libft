/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_ti.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 16:52:33 by briviere          #+#    #+#             */
/*   Updated: 2017/12/21 09:19:43 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

char	*ft_term_ti(char **termbuf)
{
	static char	*ti;

	if (termbuf)
		ti = tgetstr("ti", termbuf);
	return (ti);
}
