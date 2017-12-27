/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_tty.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 08:58:48 by briviere          #+#    #+#             */
/*   Updated: 2017/12/27 09:25:48 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

int		ft_term_tty(enum e_tty_act act)
{
	static int	fd;

	if (act == TTY_OPEN)
		fd = open("/dev/tty", O_WRONLY);
	else if (act == TTY_CLOSE)
		close(fd);
	return (fd);
}
