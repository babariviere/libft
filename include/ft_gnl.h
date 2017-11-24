/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:14:51 by briviere          #+#    #+#             */
/*   Updated: 2017/11/24 21:01:11 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GNL_H
# define FT_GNL_H

# include "libft.h"
# include <string.h>

# define BUFF_SIZE 1024

typedef struct	s_fd_tracker {
	int		fd;
	char	*buf;
}				t_fd_tracker;

int				ft_gnl(const int fd, char **line);

#endif
