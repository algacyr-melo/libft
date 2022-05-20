/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almelo <almelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:38:21 by almelo            #+#    #+#             */
/*   Updated: 2022/05/14 13:46:10 by almelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	buffer_size;

	buffer_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(buffer_size);
	ft_strlcpy(str, s1, buffer_size);
	ft_strlcat(str, s2, buffer_size);
	return (str);
}
