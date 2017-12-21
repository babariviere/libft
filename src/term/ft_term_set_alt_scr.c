/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_set_alt_scr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 09:35:51 by briviere          #+#    #+#             */
/*   Updated: 2017/12/21 09:37:30 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

void	ft_term_set_alt_scr(int state)
{
	if (state)
		ft_term_ti(0);
	else
		ft_term_te(0);
}
