/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_set_ul.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 09:36:47 by briviere          #+#    #+#             */
/*   Updated: 2017/12/21 09:45:21 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

void	ft_term_set_ul(int state)
{
	if (state)
		tputs(ft_term_us(0), 1, ft_fputchar);
	else
		tputs(ft_term_ue(0), 1, ft_fputchar);
}
