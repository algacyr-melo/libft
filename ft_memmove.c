/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almelo <almelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:30:50 by almelo            #+#    #+#             */
/*   Updated: 2022/05/20 21:23:05 by almelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_c;
	const char	*src_c;

	dst_c = dst;
	src_c = src;
	if (dst_c < src_c)
		ft_memcpy(dst, src, len);
	else
	{
		dst_c += (len - 1);
		src_c += (len - 1);
		while (len--)
			*dst_c-- = *src_c--;
	}
	return (dst);
}
