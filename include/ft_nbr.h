/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:40:53 by briviere          #+#    #+#             */
/*   Updated: 2017/12/18 16:59:14 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NBR_H
# define FT_NBR_H

# include "ft_chr.h"
# include "ft_mem.h"
# include "ft_str.h"
# include "limits.h"
# include <string.h>

char			ft_human_metric_bin(size_t nb);
char			ft_human_metric_dec(size_t nb);
int				ft_atoi(const char *str);
char			*ft_itoa(int nb);
char			*ft_stoa_human(size_t nb, int into_bytes);
size_t			ft_numlen(int nb);
int				ft_sqrt(int nb);
int				ft_pow(int nb, int pow);

#endif
