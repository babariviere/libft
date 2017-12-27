/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_putwat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 09:38:38 by briviere          #+#    #+#             */
/*   Updated: 2017/12/27 09:52:28 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

void	ft_term_putwat(char *str, t_pos pos)
{
	ft_term_cur_mv(pos);
	tputs(str, 0, ft_putwtty);
}
