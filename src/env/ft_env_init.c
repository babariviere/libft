/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 10:27:45 by briviere          #+#    #+#             */
/*   Updated: 2017/12/18 13:22:03 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_env_init(char **envp)
{
	char	**res;
	size_t	idx;
	size_t	len;

	len = ft_tablen(envp, sizeof(char *));
	if ((res = malloc(sizeof(char *) *
					(len + 1))) == 0)
		return (0);
	idx = 0;
	while (idx < len)
	{
		res[idx] = ft_strdup(envp[idx]);
		idx++;
	}
	res[idx] = 0;
	return (res);
}
