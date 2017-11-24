/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_formatted_str.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 09:41:57 by briviere          #+#    #+#             */
/*   Updated: 2017/11/24 09:43:21 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_add_formatted_str(t_formatted *formatted, char *str,
		int next_padding)
{
	formatted->tab[formatted->idx] = str;
	formatted->padding[formatted->idx] = next_padding;
	formatted->idx++;
}
