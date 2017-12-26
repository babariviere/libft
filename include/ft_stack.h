/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/26 11:17:19 by briviere          #+#    #+#             */
/*   Updated: 2017/12/26 11:33:48 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACK_H
# define FT_STACK_H

# include "ft_mem.h"
# include <string.h>

# ifndef FT_STACK_SIZE
#  define FT_STACK_SIZE 1024
# endif

typedef struct	s_stack {
	void	*data[FT_STACK_SIZE];
	size_t	idx;
}				t_stack;
typedef struct s_stack	*t_stackptr;

void			ft_stack_init(t_stackptr stack);
void			ft_stack_push(t_stackptr stack, void *val);
void			*ft_stack_pop(t_stackptr stack);
size_t			ft_stack_len(t_stack stack);
int				ft_stack_isempty(t_stack stack);

#endif
