/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl2_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:13:33 by briviere          #+#    #+#             */
/*   Updated: 2017/12/18 09:52:11 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl2_fd(const char *str1, const char *str2, int fd)
{
	ft_putstr_fd(str1, fd);
	ft_putstr_fd(str2, fd);
	ft_putchar_fd('\n', fd);
}
