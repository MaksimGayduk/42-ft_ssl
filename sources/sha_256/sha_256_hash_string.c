/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sha_256_hash_string.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maks <maksym.haiduk@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 17:22:47 by mgayduk           #+#    #+#             */
/*   Updated: 2019/08/11 13:41:35 by maks             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sha_256.h"

void	sha_256_hash_string(char *string)
{
	t_sha_256_context	context;
	unsigned char		digest[SHA_256_DIGEST_SIZE];
	size_t				length;

	length = ft_strlen(string);
	sha_256_init(&context);
	sha_256_update(&context, (unsigned char *)string, length);
	sha_256_finish(digest, &context);
	// sha_256_print(digest, string, FT_FALSE);
}