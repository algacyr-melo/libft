/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almelo <almelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:15:54 by almelo            #+#    #+#             */
/*   Updated: 2022/05/23 18:02:47 by almelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	node->content = content;
	node->next = NULL;
	return (node);
}

#include <stdio.h>

int	main(void)
{
	t_list	*node;
	char	*str;

	str = "Hello!";
	node = ft_lstnew(str);
	printf("%s\n", node->content);	
	return (0);
}

