/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:44:38 by briviere          #+#    #+#             */
/*   Updated: 2018/02/07 17:32:15 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IO_H
# define FT_IO_H

# include <fcntl.h>
# include "ft_str.h"
# include <limits.h>
# include <string.h>
# include <unistd.h>
# include <wchar.h>

void	ft_putchar(char c);
int		ft_putwchar(wchar_t c);
int		ft_putwchar_fd(int fd, wchar_t c);
void	ft_putchar_mul(char c, size_t count);
void	ft_putstr(const char *str);
void	ft_putstr2(const char *str1, const char *str2);
void	ft_putstr3(const char *str1, const char *str2, const char *str3);
void	ft_putendl(const char *str);
void	ft_putendl2(const char *str1, const char *str2);
void	ft_putendl3(const char *str1, const char *str2, const char *str3);
void	ft_putnbr(int n);
void	ft_putnbr_base(int nb, char *base);
void	ft_putnbr_bin(int nb);
void	ft_putnbr_octal(int nb);
void	ft_putnbr_hex(int nb);
int		ft_puterr(int err, char *str);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(const char *str, int fd);
void	ft_putstr2_fd(const char *str1, const char *str2, int fd);
void	ft_putstr3_fd(const char *str1, const char *str2, const char *str3,
		int fd);
void	ft_putendl_fd(const char *str, int fd);
void	ft_putendl2_fd(const char *str1, const char *str2, int fd);
void	ft_putendl3_fd(const char *str1, const char *str2, const char *str3,
		int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putaddr(void *addr);
void	ft_putsize(size_t size);

#endif
