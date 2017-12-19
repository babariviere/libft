/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_hidein.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 13:30:07 by briviere          #+#    #+#             */
/*   Updated: 2017/12/19 13:36:17 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

void	ft_term_hidein(void)
{
	struct termios	term;

	tcgetattr(0, &term);
	term.c_lflag &= ~ECHO;
	term.c_lflag &= ~ICANON;
	tcsetattr(0, TCSANOW, &term);
}
