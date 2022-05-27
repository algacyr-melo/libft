/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almelo <almelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:38:21 by almelo            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/05/25 13:27:53 by almelo           ###   ########.fr       */
=======
/*   Updated: 2022/05/26 11:46:33 by almelo           ###   ########.fr       */
>>>>>>> f00726c724ea07c3d8ecfdaa279bf51bdd75015a
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buffer;
	size_t	b_size;

<<<<<<< HEAD
	buffer_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(buffer_size);
	if (str == 0)
		return (0);
	ft_strlcpy(str, s1, buffer_size);
	ft_strlcat(str, s2, buffer_size);
	return (str);
=======
	b_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	buffer = ft_calloc(b_size, sizeof(*s1));
	if (!buffer)
		return (0);
	ft_strlcpy(buffer, s1, b_size);
	ft_strlcat(buffer, s2, b_size);
	return (buffer);
>>>>>>> f00726c724ea07c3d8ecfdaa279bf51bdd75015a
}
