/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr2_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:12:46 by briviere          #+#    #+#             */
/*   Updated: 2017/12/18 09:50:52 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

void	ft_putstr2_fd(const char *str1, const char *str2, int fd)
{
	ft_putstr_fd(str1, fd);
	ft_putstr_fd(str2, fd);
}
