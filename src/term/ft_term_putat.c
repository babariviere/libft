/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_putat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 09:38:38 by briviere          #+#    #+#             */
/*   Updated: 2017/12/21 09:39:03 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

void	ft_term_putat(char *str, t_pos pos)
{
	ft_term_cur_mv(pos);
	tputs(str, 0, ft_puttty);
}
