/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:07:31 by skulkamt          #+#    #+#             */
/*   Updated: 2023/02/23 17:13:01 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// if 0 then n will overflow after subtraction
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	n;
	size_t	src_size;

	src_size = ft_strlen(src);
	n = dstsize;
	while (n != 0 && --n > 0)
	{
		*dst = *src;
		if ((*dst) == '\0')
			break ;
		dst++;
		src++;
	}
	if (n == 0 && dstsize != 0)
	{
		*dst = '\0';
	}
	return (src_size);
}
