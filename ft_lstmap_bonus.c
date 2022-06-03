/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almelo <almelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:32:00 by almelo            #+#    #+#             */
/*   Updated: 2022/06/03 17:05:13 by almelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**new_list;

	new_list = malloc(ft_lstsize(lst) * sizeof(t_list *));
	while (lst->next)
	{
		*new_list = ft_lstnew((*f)(lst->content));
		*new_list->next = lst->next;
		lst = lst->next;
	}
	*new_list->next = NULL;
	return (*new_list);
}
