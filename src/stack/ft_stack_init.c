/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/26 11:27:45 by briviere          #+#    #+#             */
/*   Updated: 2017/12/26 11:28:31 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	ft_stack_init(t_stackptr stack)
{
	stack->idx = 0;
	ft_bzero(stack->data, sizeof(void *) * FT_STACK_SIZE);
}
