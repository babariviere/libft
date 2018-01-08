/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_gscol.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 13:36:18 by briviere          #+#    #+#             */
/*   Updated: 2018/01/08 13:38:30 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

int		ft_term_gscol(enum e_term_act act, int val)
{
	static int	col;

	if (act == TERM_SET && val <= 0)
		col = tgetnum("co");
	else if (act == TERM_SET)
		col = val;
	return (col);
}
