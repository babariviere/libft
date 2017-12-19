/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:03:31 by briviere          #+#    #+#             */
/*   Updated: 2017/12/18 09:49:32 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

void	ft_putendl2(const char *str1, const char *str2)
{
	ft_putstr(str1);
	ft_putstr(str2);
	ft_putchar('\n');
}
