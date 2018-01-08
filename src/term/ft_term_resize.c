/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_resize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 13:43:20 by briviere          #+#    #+#             */
/*   Updated: 2018/01/08 13:45:55 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

void	ft_term_resize(int sig)
{
	struct winsize	win;

	(void)sig;
	if (ioctl(ft_term_tty(TTY_GET), TIOCGWINSZ, &win) != -1)
	{
		ft_term_gscol(TERM_SET, win.ws_col);
		ft_term_gsrow(TERM_SET, win.ws_row);
	}
	else
	{
		ft_term_gscol(TERM_SET, 80);
		ft_term_gsrow(TERM_SET, 123);
	}
}
