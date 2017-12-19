/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_te.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 16:53:32 by briviere          #+#    #+#             */
/*   Updated: 2017/12/19 16:53:50 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

void	ft_term_te(char **termbuf)
{
	static char	*te;

	if (te == 0)
		te = tgetstr("te", termbuf);
	tputs(te, 1, ft_fputchar);
}
