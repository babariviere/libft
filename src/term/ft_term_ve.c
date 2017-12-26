/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_ve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 15:34:27 by briviere          #+#    #+#             */
/*   Updated: 2017/12/26 15:52:41 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

char	*ft_term_ve(char **termbuf)
{
	static char	*ve;

	if (termbuf)
		ve = tgetstr("ve", termbuf);
	return (ve);
}
