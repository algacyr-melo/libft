/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almelo <almelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:30:50 by almelo            #+#    #+#             */
/*   Updated: 2022/05/12 14:36:10 by almelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char			*str_src;
	char				*str_dst;
	char				*temp;
	unsigned int		i;

	str_src = src;
	str_dst = dst;
	temp = ft_strdup(str_src);
	i = 0;
	while (i < len)
	{
		*(str_dst + i) = *(temp + i);
		i++;
	}
	free(temp);
	return (dst);
}
