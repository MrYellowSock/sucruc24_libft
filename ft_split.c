/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:07:10 by skulkamt          #+#    #+#             */
/*   Updated: 2023/03/11 21:57:41 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	count_words(const char *start, char sep)
{
	unsigned int	count;
	int				prev_is_sep;
	int				cur_is_sep;

	prev_is_sep = 1;
	count = 0;
	while (*start != 0)
	{
		cur_is_sep = *start == sep;
		if (prev_is_sep && !cur_is_sep)
		{
			count++;
		}
		prev_is_sep = cur_is_sep;
		start++;
	}
	return (count);
}

unsigned int	world_len(const char *start, char sep)
{
	unsigned int	len;

	len = 0;
	while (*start != 0 && !(*start == sep))
	{
		len++;
		start++;
	}
	return (len);
}

const char	*copy_next(char **target, const char *str, int wl)
{
	int	j;

	*target = ft_calloc((wl + 1), sizeof(char));
	if (*target == NULL)
		return (NULL);
	j = 0;
	while (j < wl)
	{
		(*target)[j++] = *str++;
	}
	return (str);
}

void	*free_all(char **results)
{
	int	i;

	i = 0;
	while (results[i] != NULL)
	{
		free(results[i]);
		i++;
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	total;
	char			**results;
	unsigned int	i;
	int				wl;

	if (s == NULL)
		return (NULL);
	total = count_words(s, c);
	results = ft_calloc((total + 1), sizeof(char *));
	if (results == NULL)
		return (NULL);
	i = 0;
	while (*s != 0 && i < total)
	{
		wl = world_len(s, c);
		if (wl > 0)
		{
			s = copy_next(results + i++, s, wl);
			if (s == NULL)
				return (free_all(results));
		}
		else
			s++;
	}
	return (results);
}
