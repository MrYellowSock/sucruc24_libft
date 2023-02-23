/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:06:32 by skulkamt          #+#    #+#             */
/*   Updated: 2023/02/23 17:22:51 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*x;
	void	*cont;

	head = NULL;
	while (lst != NULL)
	{
		cont = lst->content;
		if (f != NULL)
		{
			cont = f(cont);
		}
		x = ft_lstnew(cont);
		if (!x)
		{
			ft_lstclear(&head, del);
		}
		ft_lstadd_back(&head, x);
		lst = lst->next;
	}
	return (head);
}
