/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_start.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 10:41:44 by briviere          #+#    #+#             */
/*   Updated: 2017/12/27 10:43:16 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

void	ft_term_start(int cur, int hidein)
{
	ft_term_tty(TTY_OPEN);
	ft_term_set_alt_scr(1);
	if (hidein)
		ft_term_hidein();
	ft_term_clr();
	if (cur)
		ft_term_set_cur_vis(0);
}
