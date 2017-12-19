/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_clr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 09:57:19 by briviere          #+#    #+#             */
/*   Updated: 2017/12/19 10:38:37 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

inline void	ft_term_clr(char **termbuf)
{
	static char	*cl;
	
	if (cl == 0)
		cl = tgetstr("cl", termbuf);
	tputs(cl, 0, ft_fputchar);
}
