/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:07:46 by skulkamt          #+#    #+#             */
/*   Updated: 2023/02/23 17:08:15 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	tocheck;
	char	*lastok;
	size_t	i;

	lastok = NULL;
	tocheck = ft_strlen(s);
	i = 0;
	while (i <= tocheck)
	{
		if (s[i] == (char)c)
		{
			lastok = ((char *)&s[i]);
		}
		i++;
	}
	return (lastok);
}
