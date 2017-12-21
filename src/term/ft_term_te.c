/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_te.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 16:53:32 by briviere          #+#    #+#             */
/*   Updated: 2017/12/21 09:19:14 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

char	*ft_term_te(char **termbuf)
{
	static char	*te;

	if (termbuf)
		te = tgetstr("te", termbuf);
	return (te);
}
