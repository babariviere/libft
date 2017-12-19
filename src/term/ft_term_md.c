/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_md.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 15:57:55 by briviere          #+#    #+#             */
/*   Updated: 2017/12/19 15:59:58 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

void	ft_term_md(char **termduf)
{
	static char	*md;
	
	if (md == 0)
		md = tgetstr("md", termduf);
	tputs(md, 1, ft_fputchar);
}
