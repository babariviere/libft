/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_cm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 10:24:18 by briviere          #+#    #+#             */
/*   Updated: 2017/12/19 10:24:50 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

char	*ft_term_cm(char **termbuf)
{
	static char		*cm;

	if (cm == 0)
		cm = tgetstr("cm", termbuf);
	return (cm);
}
