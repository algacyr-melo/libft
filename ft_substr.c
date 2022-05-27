/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almelo <almelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:15:52 by almelo            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/05/25 14:01:03 by almelo           ###   ########.fr       */
=======
/*   Updated: 2022/05/26 11:39:32 by almelo           ###   ########.fr       */
>>>>>>> f00726c724ea07c3d8ecfdaa279bf51bdd75015a
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
<<<<<<< HEAD
	substr = malloc(len + 1);
=======
	substr = ft_calloc(len + 1, sizeof(*s));
>>>>>>> f00726c724ea07c3d8ecfdaa279bf51bdd75015a
	if (!substr)
		return (0);
	ft_strlcpy(substr, (s + start), len + 1);
	return (substr);
}
