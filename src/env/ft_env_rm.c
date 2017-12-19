/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env_rm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 09:39:02 by briviere          #+#    #+#             */
/*   Updated: 2017/12/19 11:16:34 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_env.h"

void		ft_env_rm(char ***envp_ptr, char *name)
{
	char		**envp;
	size_t		idx;
	size_t		len;
	size_t		nlen;

	idx = 0;
	envp = *envp_ptr;
	len = ft_tablen(envp, sizeof(char *));
	nlen = ft_strlen(name);
	while (idx < len)
	{
		if (ft_strncmp(envp[idx], name, nlen) == 0 && envp[idx][nlen] == '=')
		{
			ft_memdel((void **)(envp + idx));
			len--;
			ft_memcpy(envp + idx, envp + idx + 1, sizeof(char *) *
					(len - idx));
			envp = ft_realloc(envp, len * sizeof(char *),
					(len + 1) * sizeof(char *));
			envp[len] = 0;
			*envp_ptr = envp;
			return ;
		}
		idx++;
	}
}
