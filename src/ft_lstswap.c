/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 14:27:07 by briviere          #+#    #+#             */
/*   Updated: 2017/12/07 14:30:28 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstswap(t_list **lst1, t_list **lst2)
{
	ft_swap_ptr((void **)&((*lst1)->next), (void **)&((*lst2)->next));
	ft_swap_ptr((void **)lst1, (void **)lst2);
}
