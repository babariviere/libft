/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_set_rv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 09:37:38 by briviere          #+#    #+#             */
/*   Updated: 2017/12/21 09:45:45 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

void	ft_term_set_rv(int state)
{
	if (state)
		tputs(ft_term_mr(0), 1, ft_fputchar);
	else
		tputs(ft_term_me(0), 1, ft_fputchar);
}
