/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 17:24:25 by briviere          #+#    #+#             */
/*   Updated: 2017/12/19 16:51:38 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TERM_H
# define FT_TERM_H

# include "ft_env.h"
# include "ft_io.h"
# include "ft_str.h"
# include <term.h>
# include <termios.h>

char	*ft_term_init(const char *termtype);
char	*ft_term_type(void);
/* Column number */
int		ft_term_col(void);
/* Row number */
int		ft_term_row(void);
/* Clear window */
void	ft_term_clr(char **termbuf);
/* Cursor move */
char	*ft_term_cm(char **termbuf);
/* Move cursor to hpos,vpos */
void	ft_term_cur_mv(char **termbuf, int hpos, int vpos);

/* Hide input */
void	ft_term_hidein(void);

/*
** APPEARANCE MODES
*/
/* Blinking */
void	ft_term_mb(char **termbuf);
/* Double bright */
void	ft_term_md(char **termbuf);
/* Half bright */
void	ft_term_mh(char **termbuf);
/* Invisible */
void	ft_term_mk(char **termbuf);
/* Protected */
void	ft_term_mp(char **termbuf);
/* Reverse video */
void	ft_term_mr(char **termbuf);
/* End appearance mode */
void	ft_term_me(char **termbuf);
/* Underline start */
void	ft_term_us(char **termbuf);
/* Underline end */
void	ft_term_ue(char **termbuf);

/*
** INITIALIZATION
*/
/* Start alternate screen buffer */
void	ft_term_ti(char **termbuf);
/* End alternate screen buffer */
void	ft_term_te(char **termbuf);

#endif
