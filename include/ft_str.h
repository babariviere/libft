/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:42:24 by briviere          #+#    #+#             */
/*   Updated: 2017/12/19 12:54:53 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STR_H
# define FT_STR_H

# include "ft_chr.h"
# include "ft_mem.h"

size_t		ft_strlen(const char *s);
char		*ft_strdup(const char *s);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strncpy(char *dst, const char *src, size_t len);
char		*ft_strcpy_esc(char *dst, const char *src);
char		*ft_strncpy_esc(char *dst, const char *src, size_t len);
char		*ft_strcat(char *dst, const char *src);
char		*ft_strncat(char *dst, const char *src, size_t n);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strstr(const char *haystack, const char *needle);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_strcmp_rev(const char *s1, const char *s2);
int			ft_strequ(const char *s1, const char *s2);
int			ft_strnequ(const char *s1, const char *s2, size_t n);
char		*ft_strnew(size_t size);
void		ft_strdel(char **as);
void		ft_strclr(char *s);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strmap(const char *s, char (*f)(char));
char		*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char		*ft_strsub(const char *s, size_t start, size_t len);
char		*ft_strjoin(const char *s1, const char *s2);
char		*ft_strjoin_sep(const char *s1, char sep, const char *s2);
size_t		ft_strtab_len(char **tab);
char		*ft_strtab_join(char **tab);
char		*ft_strtab_join_sep(char **tab, char sep);
char		*ft_strtrim(const char *s);
char		**ft_strsplit(const char *s, char c);
void		ft_strsort(char **strs, int (*cmp)(const char *, const char *));
void		ft_strremove(char **strs, size_t idx);
void		ft_strdedup(char **strs);
char		*ft_strchr_esc(const char *str, char c);
char		*ft_strrepl(char *str, char *to_repl, char *with);
size_t		ft_strmax(char **strs);

#endif
