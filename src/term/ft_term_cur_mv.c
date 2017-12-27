/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_cur_mv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 10:05:54 by briviere          #+#    #+#             */
/*   Updated: 2017/12/21 09:24:31 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

inline void	ft_term_cur_mv(t_pos pos)
{
	tputs(tgoto(ft_term_cm(0), pos.x, pos.y), 1, ft_puttty);
}
