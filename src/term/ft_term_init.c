/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:37:59 by briviere          #+#    #+#             */
/*   Updated: 2017/12/26 15:53:18 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

static void		ft_init_all(char **termbuf)
{
	ft_term_cl(termbuf);
	ft_term_cm(termbuf);
	ft_term_mb(termbuf);
	ft_term_md(termbuf);
	ft_term_me(termbuf);
	ft_term_mh(termbuf);
	ft_term_mk(termbuf);
	ft_term_mp(termbuf);
	ft_term_mr(termbuf);
	ft_term_me(termbuf);
	ft_term_te(termbuf);
	ft_term_ti(termbuf);
	ft_term_ue(termbuf);
	ft_term_us(termbuf);
	ft_term_vi(termbuf);
	ft_term_ve(termbuf);
}

char			*ft_term_init(const char *termtype, int set_all)
{
	char	*termbuf;
	int		succ;

	if ((termbuf = ft_strnew(2048)) == 0)
		return (0);
	succ = tgetent(termbuf, termtype);
	if (succ <= 0)
		return (0);
	if (set_all)
		ft_init_all(&termbuf);
	return (termbuf);
}
