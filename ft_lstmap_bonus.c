/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almelo <almelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:32:00 by almelo            #+#    #+#             */
/*   Updated: 2022/06/07 00:05:28 by almelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	while (lst->next)
	{
		new = ft_lstnew((*f)(lst->content));
		if (new == NULL)
			(*del)(lst->content);
		new->next = lst->next;	
		lst = lst->next;
	}
	new = ft_lstnew((*f)(lst->content));
	return (new);
}
