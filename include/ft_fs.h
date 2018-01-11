/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fs.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 13:40:04 by briviere          #+#    #+#             */
/*   Updated: 2018/01/11 14:08:56 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FS_H
# define FT_FS_H

# include "ft_mem.h"
# include "ft_str.h"

char	*ft_basename(const char *path);
char	*ft_join_path(const char *path, const char *relative);

#endif
