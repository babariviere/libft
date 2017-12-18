/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:27:28 by briviere          #+#    #+#             */
/*   Updated: 2017/12/08 17:03:11 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstdel(t_dlst **alst, void (*del)(void *, size_t))
{
	t_dlst	*curr;
	t_dlst	*next;

	curr = *alst;
	while (curr)
	{
		next = curr->next;
		ft_dlstdelone(&curr, del);
		curr = next;
	}
	*alst = 0;
}
