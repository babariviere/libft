/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env_rm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 09:39:02 by briviere          #+#    #+#             */
/*   Updated: 2017/12/13 09:44:56 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_env_rm(char ***envp_ptr, char *name)
{
	char		**envp;
	size_t		idx;
	size_t		len;
	size_t		name_len;

	idx = 0;
	envp = *envp_ptr;
	len = ft_tablen(envp, sizeof(char *));
	name_len = ft_strlen(name) - 1;
	while (idx < len)
	{
		if (ft_strncmp(envp[idx], name, name_len) == 0)
		{
			ft_swap_ptr((void **)(envp + idx), (void **)(envp + len - 1));
			free(envp[len - 1]);
			len--;
			*envp_ptr = ft_realloc(envp, len, len);
			(*envp_ptr)[len - 1] = 0;
			return ;
		}
		idx++;
	}
}
