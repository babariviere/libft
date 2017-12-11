/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env_var.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 16:35:53 by briviere          #+#    #+#             */
/*   Updated: 2017/12/11 16:41:47 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_env_var(char **envp, char *name)
{
	size_t		idx;
	size_t		len;

	idx = 0;
	len = ft_strlen(name);
	while (envp[idx])
	{
		if (ft_strncmp(envp[idx], name, len) == 0)
			return (ft_strdup(ft_strchr(envp[idx], '=') + 1));
	}
	return (0);
}
