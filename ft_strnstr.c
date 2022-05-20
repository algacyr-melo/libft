/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almelo <almelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:16:51 by almelo            #+#    #+#             */
/*   Updated: 2022/05/12 11:58:37 by almelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	char			*str;

	str = (char *) haystack;
	if (!needle)
		return (str);
	i = 0;
	while (*(str + i) && (i + ft_strlen(needle)) <= len)
	{
		if (ft_strncmp((str + i), needle, ft_strlen(needle)) == 0)
			return ((str + i));
		i++;
	}
	return (0);
}
