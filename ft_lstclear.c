/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:05:57 by skulkamt          #+#    #+#             */
/*   Updated: 2023/02/23 17:06:03 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;
	t_list	*nxt;

	head = *lst;
	if (lst == NULL || head == NULL)
	{
		return ;
	}
	while (head != NULL)
	{
		nxt = head->next;
		ft_lstdelone(head, del);
		head = nxt;
	}
	*lst = 0;
}
