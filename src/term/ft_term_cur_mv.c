/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_cur_mv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 10:05:54 by briviere          #+#    #+#             */
/*   Updated: 2017/12/19 10:30:24 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

inline void	ft_term_cur_mv(char **termbuf, int hpos, int vpos)
{
	tputs(tgoto(ft_term_cm(termbuf), hpos, vpos), 1, ft_fputchar);
}
