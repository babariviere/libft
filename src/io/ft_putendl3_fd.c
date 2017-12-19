/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl3_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:13:33 by briviere          #+#    #+#             */
/*   Updated: 2017/12/18 09:52:53 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

void	ft_putendl3_fd(const char *str1, const char *str2, const char *str3,
		int fd)
{
	ft_putstr_fd(str1, fd);
	ft_putstr_fd(str2, fd);
	ft_putstr_fd(str3, fd);
	ft_putchar_fd('\n', fd);
}
