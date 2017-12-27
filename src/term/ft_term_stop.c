/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_stop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 10:43:20 by briviere          #+#    #+#             */
/*   Updated: 2017/12/27 10:44:01 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

void	ft_term_stop(void)
{
	ft_term_set_cur_vis(1);
	ft_term_clr();
	ft_term_set_alt_scr(0);
	ft_term_tty(TTY_CLOSE);
}
