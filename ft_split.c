/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almelo <almelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:07:38 by almelo            #+#    #+#             */
/*   Updated: 2022/05/24 09:59:42 by almelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strflen(const char *str, char c)
{
	size_t	len;

	len = 0;
	while (*(str + len) != c && *(str + len))
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	n_elem;
	unsigned int	i;
	unsigned int	arr_i;	
	char			**arr;

	n_elem = 1;
	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
			n_elem++;
		i++;
	}
	arr = malloc(sizeof(char *) * (n_elem + 1));
	i = 0;
	arr_i = 0;
	while (arr_i < n_elem)
	{
		*(arr + arr_i) = ft_substr(s, i, ft_strflen(s + i, c));
		i += ft_strlen(*(arr + arr_i)) + 1;
		arr_i++;
	}
	*(arr + arr_i) = 0;
	return (arr);
}
