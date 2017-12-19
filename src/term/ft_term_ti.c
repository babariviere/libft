/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_ti.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 16:52:33 by briviere          #+#    #+#             */
/*   Updated: 2017/12/19 16:53:25 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

void	ft_term_ti(char **termbuf)
{
	static char	*ti;

	if (ti == 0)
		ti = tgetstr("ti", termbuf);
	tputs(ti, 1, ft_fputchar);
}
