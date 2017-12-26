/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_vi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 15:34:27 by briviere          #+#    #+#             */
/*   Updated: 2017/12/26 15:52:33 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

char	*ft_term_vi(char **termbuf)
{
	static char	*vi;

	if (termbuf)
		vi = tgetstr("vi", termbuf);
	return (vi);
}
