/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 09:03:53 by briviere          #+#    #+#             */
/*   Updated: 2017/12/19 09:28:19 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_term.h"

char	*ft_term_type(void)
{
	char	**env;
	char	*type;

	env = *ft_env_load();
	type = ft_env_get(env, "TERMCAP");
	if (type == 0)
		type = ft_env_get(env, "TERM");
	return (type);
}
