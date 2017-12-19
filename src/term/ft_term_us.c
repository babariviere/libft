/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_ul.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 15:34:27 by briviere          #+#    #+#             */
/*   Updated: 2017/12/19 15:41:02 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

char	*ft_term_us(char **termbuf)
{
	static char	*us;

	if (us == 0)
		us = tgetstr("us", termbuf);
	return (us);
}
