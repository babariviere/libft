/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_cm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 10:24:18 by briviere          #+#    #+#             */
/*   Updated: 2017/12/21 09:15:57 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

char	*ft_term_cm(char **termbuf)
{
	static char		*cm;

	if (termbuf)
		cm = tgetstr("cm", termbuf);
	return (cm);
}
