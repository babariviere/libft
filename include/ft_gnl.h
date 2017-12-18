/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:14:51 by briviere          #+#    #+#             */
/*   Updated: 2017/12/18 16:57:33 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GNL_H
# define FT_GNL_H

# include "ft_lst.h"
# include "ft_mem.h"
# include "ft_str.h"
# include <string.h>
# include <unistd.h>

# define BUFF_SIZE 1024

typedef struct	s_fd_tracker {
	int		fd;
	char	*buf;
}				t_fd_tracker;

int				ft_gnl(const int fd, char **line);

#endif
