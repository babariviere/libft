/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 17:24:25 by briviere          #+#    #+#             */
/*   Updated: 2017/12/27 10:42:02 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TERM_H
# define FT_TERM_H

# include "ft_env.h"
# include "ft_geo.h"
# include "ft_io.h"
# include "ft_str.h"
# include <term.h>
# include <termios.h>

enum	e_tty_act {
	TTY_OPEN,
	TTY_CLOSE,
	TTY_GET,
};

int		ft_term_tty(enum e_tty_act act);
int		ft_puttty(int c);
int		ft_putwtty(int c);

char	*ft_term_init(const char *termtype, int set_all);
char	*ft_term_type(void);

void	ft_term_start(int cur, int hidein);
void	ft_term_stop(void);

int		ft_term_col(void);
int		ft_term_row(void);
void	ft_term_clr(void);
void	ft_term_cur_mv(t_pos pos);
void	ft_term_putat(char *str, t_pos pos);
void	ft_term_putwat(char *str, t_pos pos);

void	ft_term_hidein(void);

void	ft_term_set_alt_scr(int state);
void	ft_term_set_ul(int state);
void	ft_term_set_rv(int state);
void	ft_term_set_cur_vis(int state);

char	*ft_term_cl(char **termbuf);
char	*ft_term_cm(char **termbuf);
char	*ft_term_mb(char **termbuf);
char	*ft_term_md(char **termbuf);
char	*ft_term_me(char **termbuf);
char	*ft_term_mh(char **termbuf);
char	*ft_term_mk(char **termbuf);
char	*ft_term_mp(char **termbuf);
char	*ft_term_mr(char **termbuf);
char	*ft_term_te(char **termbuf);
char	*ft_term_ti(char **termbuf);
char	*ft_term_ue(char **termbuf);
char	*ft_term_us(char **termbuf);
char	*ft_term_vi(char **termbuf);
char	*ft_term_ve(char **termbuf);

#endif
