/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:25:41 by briviere          #+#    #+#             */
/*   Updated: 2018/02/21 11:11:17 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

void	ft_lstdelone(t_lst **alst, void (*del)(void *, size_t))
{
	if (del)
		del((*alst)->content, (*alst)->content_size);
	ft_memdel((void **)alst);
}
