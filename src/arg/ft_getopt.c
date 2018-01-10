/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getopt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 10:40:37 by briviere          #+#    #+#             */
/*   Updated: 2018/01/10 11:15:55 by briviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arg.h"

char	*g_optarg = 0;
int		g_optind = 1;
int		g_opterr = 0;
int		g_optopt = 0;

static int	find_opt(char opt_c, const char *opt)
{
	int		idx;

	idx = 0;
	while (opt[idx])
	{
		if (opt[idx] == opt_c)
			return (idx);
		idx++;
	}
	return (-1);
}

static int	handle_arg(int ac, char *const av[], char o, const char *opt)
{
	size_t	len;

	len = ft_strlen(av[g_optind]);
	if (len == 2)
	{
		if ((g_optind + 1) >= ac || av[g_optind + 1] == 0)
		{
			g_opterr = 1;
			if (opt[0] == ':')
				return (':');
			else
				return ('?');
		}
		g_optarg = ft_strdup(av[g_optind + 1]);
		g_optind += 2;
		return (o);
	}
	g_optarg = ft_strdup(av[g_optind] + 2);
	g_optind++;
	return (o);
}

int			ft_getopt(int ac, char *const av[], const char *opt)
{
	int		idx;

	if (g_optind >= ac || av[g_optind] == 0 ||
			*av[g_optind] != '-' || ft_strequ(av[g_optind], "-"))
		return (-1);
	if (ft_strequ(av[g_optind], "--"))
	{
		g_optind++;
		return (-1);
	}
	idx = find_opt(av[g_optind][1], opt);
	if (idx < 0)
	{
		g_opterr = 1;
		return ('?');
	}
	g_optopt = opt[idx];
	if (opt[idx + 1] != ':')
	{
		g_optind++;
		return (opt[idx]);
	}
	else
		return (handle_arg(ac, av, opt[idx], opt));
}
