/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:13:33 by briviere          #+#    #+#             */
/*   Updated: 2017/12/18 09:51:59 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

void	ft_putendl_fd(const char *str, int fd)
{
	if (str)
		ft_putstr_fd(str, fd);
	ft_putchar_fd('\n', fd);
}
