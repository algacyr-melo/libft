/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almelo <almelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:08:51 by almelo            #+#    #+#             */
/*   Updated: 2022/05/19 17:15:23 by almelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*str;
	unsigned int		i;

	str = s;
	i = 0;
	while (i < n)
	{
		if (*(str + i) == (unsigned char) c)
			return ((char *)(str + i));
		i++;
	}
	return (0);
}
