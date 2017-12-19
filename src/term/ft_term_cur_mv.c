/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_cur_mv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 10:05:54 by briviere          #+#    #+#             */
/*   Updated: 2017/12/19 10:15:56 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

void	ft_term_cur_mv(char **termbuf, int hpos, int vpos)
{
	static char		*cm;

	if (cm == 0)
		cm = tgetstr("cm", termbuf);
	ft_putstr(tgoto(cm, hpos, vpos));
}
