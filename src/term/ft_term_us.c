/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_us.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 15:34:27 by briviere          #+#    #+#             */
/*   Updated: 2017/12/19 15:45:20 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

void	ft_term_us(char **termbuf)
{
	static char	*us;

	if (us == 0)
		us = tgetstr("us", termbuf);
	tputs(us, 1, ft_fputchar);
}
