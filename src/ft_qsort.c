/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 09:22:11 by briviere          #+#    #+#             */
/*   Updated: 2017/12/11 09:46:48 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_partition(void **tab, int start, int end,
		int (*cmp)(const void *, const void *))
{
	void	*piv;
	int		left;
	int		right;

	piv = tab[end];
	left = start - 1;
	right = end;
	while (1)
	{
		while (cmp(tab[++left], piv) > 0)
			;
		while (cmp(tab[--right], piv) < 0)
			;
		if (left >= right)
			break;
		ft_swap_ptr(tab + left, tab + right);
	}
	return (left);
}

static void		ft_qsort_(void **tab, int start, int end,
		int (*cmp)(const void *, const void *))
{
	int		part;

	if ((start - end) >= 0)
		return;
	part = ft_partition(tab, start, end, cmp);
	ft_qsort_(tab, start, part, cmp);
	ft_qsort_(tab, part + 1, end, cmp);
}

void			ft_qsort(void **tab, size_t len,
		int (*cmp)(const void *, const void *))
{
	if (tab)
		ft_qsort_(tab, 0, len - 1, cmp);
}
