/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 10:27:45 by briviere          #+#    #+#             */
/*   Updated: 2017/12/12 10:29:17 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_env_init(const char **envp)
{
	char	**res;
	size_t	idx;

	if ((res = malloc(sizeof(char *) * ft_tablen(envp, sizeof(char *)))) == 0)
		return (0);
	idx = 0;
	while (envp[idx])
	{
		res[idx] = ft_strdup(envp[idx]);
		idx++;
	}
	res[idx] = 0;
	return (res);
}
