/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_cl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 09:14:54 by briviere          #+#    #+#             */
/*   Updated: 2017/12/21 09:15:46 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

char	*ft_term_cl(char **termbuf)
{
	static char		*cl;

	if (termbuf)
		cl = tgetstr("cl", termbuf);
	return (cl);
}
