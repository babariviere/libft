/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_ue.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 15:41:35 by briviere          #+#    #+#             */
/*   Updated: 2017/12/19 15:44:58 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

void	ft_term_ue(char **termbuf)
{
	static char	*ue;

	if (ue == 0)
		ue = tgetstr("ue", termbuf);
	tputs(ue, 1, ft_fputchar);
}
