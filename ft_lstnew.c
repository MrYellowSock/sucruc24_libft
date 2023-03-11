/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:06:35 by skulkamt          #+#    #+#             */
/*   Updated: 2023/03/11 16:47:43 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*creation;

	creation = malloc(sizeof(t_list));
	if(creation == NULL)
		return NULL;
	creation->content = content;
	creation->next = NULL;
	return (creation);
}
