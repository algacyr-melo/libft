/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almelo <almelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 13:14:46 by almelo            #+#    #+#             */
/*   Updated: 2022/06/03 15:54:03 by almelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;
	int		arr[] = { 4, 2, 0, -1 };
	t_list	*list;

	s1 = "Hello!";
	s2 = "lst";
	s3 = "42";
	s4 = "\tbonus\t";
	list = ft_lstnew("First will be the last");
	ft_lstadd_front(&list, ft_lstnew(s1));
	ft_lstadd_front(&list, ft_lstnew(s3));
	ft_lstadd_front(&list, ft_lstnew(s4));
	ft_lstadd_front(&list, ft_lstnew(s2));

	ft_lstadd_front(&list, ft_lstnew(arr));
	printf("%d\n", *((int *)(list->content) + 3));
	printf("%d\n", ft_lstsize(list));
	while (list->next)
	{
		printf("%s\n", list->content);
		list = list->next;
	}
	printf("%s\n", list->content);
	list = ft_lstlast(list);
	printf("%s\n", list->content);
	return (0);
}
