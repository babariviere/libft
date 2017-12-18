/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmt_add_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 09:41:57 by briviere          #+#    #+#             */
/*   Updated: 2017/12/18 11:10:09 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_fmt_add_str(t_fmt *fmt, char *str,
		int next_padding)
{
	fmt->tab[fmt->idx] = str;
	fmt->padding[fmt->idx] = next_padding;
	fmt->idx++;
}
