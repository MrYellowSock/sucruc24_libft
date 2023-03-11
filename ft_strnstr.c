/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:07:43 by skulkamt          #+#    #+#             */
/*   Updated: 2023/03/11 17:22:01 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	m_min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			little_len;
	long long int	actual_search;
	long long int	i;

	if (len == 0)
		return ((char *)big);
	little_len = ft_strlen(little);
	actual_search = m_min(ft_strlen(big), (long long int)len) - little_len;
	if (little_len == 0)
		return ((char *)big);
	if (actual_search < 0)
		return (NULL);
	i = 0;
	while (i <= actual_search)
	{
		if (ft_strncmp(&big[i], little, little_len) == 0)
		{
			return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
