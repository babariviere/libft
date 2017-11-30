/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_formatted_str.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 09:41:57 by briviere          #+#    #+#             */
/*   Updated: 2017/11/30 21:36:53 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_add_fmt_str(t_fmt *fmt, char *str,
		int next_padding)
{
	fmt->tab[fmt->idx] = str;
	fmt->padding[fmt->idx] = next_padding;
	fmt->idx++;
}
