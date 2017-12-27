/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttty.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 09:27:16 by briviere          #+#    #+#             */
/*   Updated: 2017/12/27 09:28:53 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

int		ft_puttty(int c)
{
	unsigned char	ca;

	ca = c;
	return (write(ft_term_tty(TTY_GET), &ca, 1));
}
