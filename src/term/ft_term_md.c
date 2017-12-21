/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_md.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 15:57:55 by briviere          #+#    #+#             */
/*   Updated: 2017/12/21 09:16:38 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

char	*ft_term_md(char **termbuf)
{
	static char	*md;
	
	if (termbuf)
		md = tgetstr("md", termbuf);
	return (md);
}
