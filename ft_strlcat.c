/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almelo <almelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:10:42 by almelo            #+#    #+#             */
/*   Updated: 2022/05/21 17:07:37 by almelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	int	i;

	dst_len = ft_strlen(dst);
	if (dstsize < dst_len)
		return (dstsize + ft_strlen(src));
	i = 0;
	while (*(src + i) && i < (int)(dstsize - dst_len - 1))
	{
		*(dst + dst_len + i) = *(src + i);
		i++;
	}
	*(dst + dst_len + i) = '\0';
	return (dst_len + ft_strlen(src));
}
