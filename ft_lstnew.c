/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almelo <almelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:15:54 by almelo            #+#    #+#             */
/*   Updated: 2022/05/25 13:13:16 by almelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	(*node).content = content;
	(*node).next = 0;
	return (node);
}

//#include <stdio.h>
//
//int	main(void)
//{
//	t_list	*node;
//	int	*src;
//	int	*temp;
//
//	src = malloc(sizeof(*src) * 4);
//	*(src + 0) = 45;
//	*(src + 1) = 42;
//	*(src + 2) = 99;
//	*(src + 3) = 1;
//	node = ft_lstnew(src);
//	temp = node->content;
//	printf("%d\n", *(temp + 3));	
//	return (0);
//}
