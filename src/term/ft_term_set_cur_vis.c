/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_set_cur_vis.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/26 15:52:55 by briviere          #+#    #+#             */
/*   Updated: 2017/12/26 15:57:37 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

void	ft_term_set_cur_vis(int state)
{
	if (state)
		tputs(ft_term_ve(0), 1, ft_puttty);
	else
		tputs(ft_term_vi(0), 1, ft_puttty);
}
