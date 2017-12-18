/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:38:58 by briviere          #+#    #+#             */
/*   Updated: 2017/12/18 16:56:09 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ENV_H
# define FT_ENV_H

# include "ft_mem.h"
# include "ft_str.h"

char			***ft_env_load(void);
char			*ft_env_get(char **envp, char *name);
void			ft_env_set(char ***envp, char *name, char *value, int over);
void			ft_env_set_ent(char ***envp, char *ent, int over);
void			ft_env_rm(char ***envp, char *name);
char			**ft_env_init(char **envp);

#endif
