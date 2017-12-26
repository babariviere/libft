/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/26 11:34:00 by briviere          #+#    #+#             */
/*   Updated: 2017/12/26 11:35:34 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	*ft_stack_pop(t_stackptr stack)
{
	void	*val;

	if (stack->idx == 0)
		return (0);
	stack->idx--;
	val = stack->data[stack->idx];
	stack->data[stack->idx] = 0;
	return (val);
}
