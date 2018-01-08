/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_gsrow.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 13:38:59 by briviere          #+#    #+#             */
/*   Updated: 2018/01/08 13:40:44 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

int		ft_term_gsrow(enum e_term_act act, int val)
{
	static int	row;

	if (act == TERM_SET && val <= 0)
		row = tgetnum("li");
	else if (act == TERM_SET)
		row = val;
	return (row);
}
