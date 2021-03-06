/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bufdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 11:08:55 by briviere          #+#    #+#             */
/*   Updated: 2018/02/16 11:09:32 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_buf.h"

void	ft_bufdel(t_buf **buf)
{
	if (buf == 0)
		return ;
	free((*buf)->data);
	ft_memdel((void **)buf);
}
