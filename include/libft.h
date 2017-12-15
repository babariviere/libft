/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 16:51:56 by briviere          #+#    #+#             */
/*   Updated: 2017/12/15 09:29:51 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "ft_gnl.h"
# include <limits.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef unsigned char	t_uchar;
typedef unsigned int	t_uint;
typedef unsigned long	t_ulong;

/*
** MEMORY
*/
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
void			ft_swap(int *a, int *b);
void			ft_swap_ptr(void **ptr1, void **ptr2);
size_t			ft_tablen(const void *tab, size_t elem_size);
void			*ft_tabjoin(const void *tab1, const void *tab2,
		size_t elem_size);
void			*ft_realloc(void *ptr, size_t prev_size, size_t new_size);
void			ft_tabdel(void ***tabptr, size_t elem_size);

/*
** NUMBER
*/
char			ft_human_metric_bin(size_t nb);
char			ft_human_metric_dec(size_t nb);
int				ft_atoi(const char *str);
char			*ft_itoa(int nb);
char			*ft_stoa_human(size_t nb, int into_bytes);
size_t			ft_numlen(int nb);

/*
** STRING
*/
size_t			ft_strlen(const char *s);
char			*ft_strdup(const char *s);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strncpy(char *dst, const char *src, size_t len);
char			*ft_strcpy_esc(char *dst, const char *src);
char			*ft_strncpy_esc(char *dst, const char *src, size_t len);
char			*ft_strcat(char *dst, const char *src);
char			*ft_strncat(char *dst, const char *src, size_t n);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *haystack, const char *needle);
char			*ft_strnstr(const char *haystack, const char *needle,
							size_t len);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_strcmp_rev(const char *s1, const char *s2);
int				ft_strequ(const char *s1, const char *s2);
int				ft_strnequ(const char *s1, const char *s2, size_t n);
char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(t_uint, char *));
char			*ft_strmap(const char *s, char (*f)(char));
char			*ft_strmapi(const char *s, char (*f)(t_uint, char));
char			*ft_strsub(const char *s, size_t start, size_t len);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strjoin_sep(const char *s1, const char *sep,
		const char *s2);
char			*ft_strtrim(const char *s);
char			**ft_strsplit(const char *s, char c);
void			ft_strsort(char **strs, int (*cmp)(const char *, const char *));
void			ft_strremove(char **strs, size_t idx);
void			ft_strdedup(char **strs);
char			*ft_strchr_esc(const char *str, char c);
void			ft_print_tab(const char **str);

/*
** CHARS
*/
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_islower(int c);
int				ft_isupper(int c);
int				ft_iswhitespace(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);

/*
** MATH
*/
int				ft_sqrt(int nb);
int				ft_pow(int nb, int pow);

/*
** OUTPUT
*/
void			ft_putchar(char c);
void			ft_putchar_mul(char c, size_t count);
void			ft_putstr(const char *str);
void			ft_putendl(const char *str);
void			ft_putnbr(int n);
void			ft_putnbr_base(int nb, char *base);
void			ft_putnbr_bin(int nb);
void			ft_putnbr_octal(int nb);
void			ft_putnbr_hex(int nb);
int				ft_puterr(int err, char *str);

/*
** OUTPUT FILE
*/
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(const char *str, int fd);
void			ft_putendl_fd(const char *str, int fd);
void			ft_putnbr_fd(int n, int fd);

/*
** LINKED LIST
*/
typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_lst;

t_lst			*ft_lstnew(const void *content, size_t content_size);
t_lst			*ft_lstnew_mv(const void *content, size_t content_size);
void			ft_lstdelone(t_lst **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_lst **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_lst **alst, t_lst *nw);
void			ft_lstpush(t_lst **alst, t_lst *nw);
void			ft_lstiter(t_lst *lst, void (*f)(t_lst *elem));
t_lst			*ft_lstmap(t_lst *lst, t_lst *(*f)(t_lst *elem));
t_lst			*ft_lstfilter(t_lst *lst, int (*f)(t_lst *elem));
size_t			ft_lstlen(const t_lst *lst);
t_lst			*ft_lstfind(const t_lst *lst,
		int (*f)(const void *content, const void *to_find),
		void *to_find);
t_lst			*ft_lstget(const t_lst *lst, size_t idx);

/*
** DOUBLE LINKED LIST
*/
typedef struct	s_dlist
{
	void			*content;
	size_t			content_size;
	struct s_dlist	*prev;
	struct s_dlist	*next;
}				t_dlst;

t_dlst			*ft_dlstnew(const void *content, size_t content_size);
t_dlst			*ft_dlstnew_mv(const void *content, size_t content_size);
void			ft_dlstdelone(t_dlst **alst, void (*del)(void *, size_t));
void			ft_dlstdel(t_dlst **alst, void (*del)(void *, size_t));
void			ft_dlstadd(t_dlst **alst, t_dlst *nw);
void			ft_dlstpush(t_dlst **alst, t_dlst *nw);
void			ft_dlstiter(t_dlst *lst, void (*f)(t_dlst *elem));
t_dlst			*ft_dlstmap(t_dlst *lst, t_dlst *(*f)(t_dlst *elem));
t_dlst			*ft_dlstfilter(t_dlst *list, int (*f)(t_dlst *elem));
size_t			ft_dlstlen(const t_dlst *lst);
t_dlst			*ft_dlstfind(const t_dlst *lst,
		int (*f)(const void *content, const void *to_find),
		void *to_find);
t_dlst			*ft_dlstget(const t_dlst *lst, size_t idx);

/*
** FMT STRINGS
*/
typedef struct	s_fmt {
	char	**tab;
	int		*padding;
	size_t	idx;
	size_t	len;
}				t_fmt;

t_fmt			*ft_init_fmt(size_t len);
void			ft_add_fmt_str(t_fmt *fmt,
		char *str, int next_padding);
void			ft_print_fmt(t_fmt *fmt);
void			ft_calibrate_fmt(t_fmt **fmts,
		size_t tab_idx, int diff_idx);
void			ft_calibrate_fmt_range(t_fmt **fmts,
		size_t start, size_t end, int diff_idx);
void			ft_sort_fmts(t_fmt **fmts, size_t tab_idx,
		int (*cmp)(const char *, const char *));
void			ft_free_fmt(t_fmt **fmt);

/*
** ENV
*/
char			*ft_env_get(char **envp, char *name);
void			ft_env_set(char ***envp, char *name, char *value, int over);
void			ft_env_set_ent(char ***envp, char *ent, int over);
void			ft_env_rm(char ***envp, char *name);
char			**ft_env_init(const char **envp);

#endif
