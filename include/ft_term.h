/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 17:24:25 by briviere          #+#    #+#             */
/*   Updated: 2017/12/19 10:13:16 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TERM_H
# define FT_TERM_H

# include "ft_env.h"
# include "ft_put.h"
# include "ft_str.h"
# include <term.h>

char	*ft_term_init(const char *termtype);
char	*ft_term_type(void);
int		ft_term_col(void);
int		ft_term_row(void);
void	ft_term_clr(char **termbuf);
void	ft_term_cur_mv(char **termbuf, int hpos, int vpos);

#endif
