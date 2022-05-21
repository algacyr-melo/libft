/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almelo <almelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 09:35:52 by almelo            #+#    #+#             */
/*   Updated: 2022/05/21 10:31:49 by almelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*str_src;
	char		*str_dst;
	unsigned int	i;

	str_src = src;
	str_dst = dst;
	i = 0;
	while (i < n)
	{
		*(str_dst + i) = *(str_src + i);
		i++;
	}
	return (dst);
}
