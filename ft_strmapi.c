/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:07:37 by skulkamt          #+#    #+#             */
/*   Updated: 2023/03/11 18:01:38 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newone;
	unsigned int	index;

	if (s == NULL)
		return (NULL);
	newone = ft_strdup(s);
	if (newone == NULL)
	{
		return (NULL);
	}
	index = 0;
	while (s[index] != 0)
	{
		newone[index] = f(index, s[index]);
		index++;
	}
	return (newone);
}
