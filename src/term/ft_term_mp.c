/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_mp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 15:57:55 by briviere          #+#    #+#             */
/*   Updated: 2017/12/21 09:18:33 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

char	*ft_term_mp(char **termbuf)
{
	static char	*mp;
	
	if (termbuf)
		mp = tgetstr("mp", termbuf);
	return (mp);
}
