/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_ue.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 15:41:35 by briviere          #+#    #+#             */
/*   Updated: 2017/12/21 09:20:00 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

char	*ft_term_ue(char **termbuf)
{
	static char	*ue;

	if (termbuf)
		ue = tgetstr("ue", termbuf);
	return (ue);
}
