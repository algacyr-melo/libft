/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almelo <almelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:38:21 by almelo            #+#    #+#             */
/*   Updated: 2022/05/27 13:44:24 by almelo           ###   ########.fr       */
/*   Updated: 2022/05/26 11:46:33 by almelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buffer;
	size_t	b_size;

	b_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	buffer = ft_calloc(b_size, sizeof(*s1));
	if (!buffer)
		return (0);
	ft_strlcpy(buffer, s1, b_size);
	ft_strlcat(buffer, s2, b_size);
	return (buffer);
}
