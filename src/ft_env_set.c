/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env_set.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 09:07:29 by briviere          #+#    #+#             */
/*   Updated: 2017/12/12 09:56:44 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_env_set(char ***envp_ptr, char *name, char *value)
{
	char		**envp;
	size_t		idx;
	size_t		name_len;

	if (name == 0)
		return ;
	envp = *envp_ptr;
	idx = 0;
	name_len = ft_strlen(name);
	while (envp[idx])
	{
		if (ft_strncmp(envp[idx], name, name_len - 1) == 0)
		{
			free(envp[idx]);
			envp[idx] = ft_strjoin_sep(name, "=", value);
			return ;
		}
	}
	envp = ft_realloc(envp, idx + 1, idx + 2);
	envp[idx + 1] = 0;
	envp[idx] = ft_strjoin_sep(name, "=", value);
	*envp_ptr = envp;
}
