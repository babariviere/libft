/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_me.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 15:57:55 by briviere          #+#    #+#             */
/*   Updated: 2017/12/21 09:17:08 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

char	*ft_term_me(char **termbuf)
{
	static char	*me;
	
	if (termbuf)
		me = tgetstr("me", termbuf);
	return (me);
}
