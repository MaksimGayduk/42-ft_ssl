/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sha_256.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayduk <mgayduk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 17:11:24 by mgayduk           #+#    #+#             */
/*   Updated: 2019/08/10 17:18:11 by mgayduk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sha_256.h"

t_sha_256_flags g_sha_256_flags;

// void		handle_files(int argc, char *const *argv)
// {
// 	int	i;

// 	i = optind;
// 	while (i < argc)
// 		sha_256_hash_file(argv[i++]);
// }

int			sha_256(int argc, char *const *argv)
{
	int	flag;

	while ((flag = ft_getopt(argc, argv, "pqrs:")) != -1)
	{
		if (flag == 'p')
		{
			g_sha_256_flags.p = 1;
			// sha_256_hash_stdin();
		}
		else if (flag == 'q')
			g_sha_256_flags.q = 1;
		else if (flag == 'r')
			g_sha_256_flags.r = 1;
		else if (flag == 's')
		{
			g_sha_256_flags.s = 1;
			sha_256_hash_string(optarg);
		}
		else if (flag == '?')
			return (1);
	}
	// if (!argv[optind] && !g_sha_256_flags.s && !g_sha_256_flags.p)
		// sha_256_hash_stdin();
	// handle_files(argc, argv);
	return (0);
}