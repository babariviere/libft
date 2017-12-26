/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/26 11:29:34 by briviere          #+#    #+#             */
/*   Updated: 2017/12/26 11:30:29 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	ft_stack_push(t_stackptr stack, void *val)
{
	if (stack->idx >= FT_STACK_SIZE)
		return ;
	stack->data[stack->idx] = val;
	stack->idx++;
}
