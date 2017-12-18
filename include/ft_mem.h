/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:39:41 by briviere          #+#    #+#             */
/*   Updated: 2017/12/18 17:14:51 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEM_H
# define FT_MEM_H

# include <stdlib.h>

void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memalloc(size_t size);
void		ft_memdel(void **ap);
void		ft_swap(int *a, int *b);
void		ft_swap_ptr(void **ptr1, void **ptr2);
size_t		ft_tablen(const void *tab, size_t elem_size);
void		*ft_tabjoin(const void *tab1, const void *tab2, size_t elem_size);
void		*ft_realloc(void *ptr, size_t prev_size, size_t new_size);
void		ft_tabdel(void ***tabptr, size_t elem_size);

#endif
