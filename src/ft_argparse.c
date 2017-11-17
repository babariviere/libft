/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argparse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:06:24 by briviere          #+#    #+#             */
/*   Updated: 2017/11/15 16:52:22 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_arg		*ft_parseflag(int ac, char **av, size_t *idx)
{
	char	**splitted;
	t_arg	*arg;

	if ((arg = ft_memalloc(sizeof(t_arg))) == 0)
		return (0);
	arg->kind = arg_flag;
	splitted = ft_strsplit(av[*idx], '=');
	if (splitted[1] == 0)
	{
		arg->name = av[*idx];
		(*idx)++;
		if (*idx < (size_t)ac && av[*idx][0] != '-')
			arg->value = av[*idx];
		else
			arg->value = 0;
	}
	else
	{
		arg->name = splitted[0];
		arg->value = splitted[1];
	}
	(*idx)++;
	return (arg);
}

static t_arg		*ft_parseexec(char *av)
{
	t_arg	*arg;

	if ((arg = ft_memalloc(sizeof(t_arg))) == 0)
		return (0);
	arg->name = av;
	arg->value = 0;
	arg->kind = arg_exec;
	return (arg);
}

static t_arg		*ft_parsecommand(char *av)
{
	t_arg	*arg;

	if ((arg = ft_memalloc(sizeof(t_arg))) == 0)
		return (0);
	arg->name = av;
	arg->value = 0;
	arg->kind = arg_command;
	return (arg);
}

static t_arg		*ft_parsevalue(char *av)
{
	t_arg	*arg;

	if ((arg = ft_memalloc(sizeof(t_arg))) == 0)
		return (0);
	arg->name = av;
	arg->value = 0;
	arg->kind = arg_value;
	return (arg);
}

t_list				*ft_argparse(int ac, char **av)
{
	t_list		*list;
	t_list		*tmp;
	size_t		idx;

	if (ac <= 0)
		return (0);
	list = ft_lstnew(ft_parseexec(av[0]), sizeof(t_arg));
	idx = 1;
	while (idx < (size_t)ac)
	{
		if (av[idx][0] == '-')
		{
			av[idx] = av[idx] + 1;
			if (av[idx][0] == '-')
				av[idx] = av[idx] + 1;
			tmp = ft_lstnew(ft_parseflag(ac, av, &idx), sizeof(t_arg));
		}
		else if (idx == 1)
			tmp = ft_lstnew(ft_parsecommand(av[idx++]), sizeof(t_arg));
		else
			tmp = ft_lstnew(ft_parsevalue(av[idx++]), sizeof(t_arg));
		ft_lstpush(&list, tmp);
	}
	return (list);
}
