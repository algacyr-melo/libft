/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almelo <almelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:07:38 by almelo            #+#    #+#             */
/*   Updated: 2022/05/24 17:18:29 by almelo           ###   ########.fr       */
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

static unsigned int	ft_get_n_elem(char const *s, char c)
{
	unsigned int	n_elem;
	unsigned int	i;
	char			*temp_s;

	n_elem = 0;
	i = 0;
	temp_s = ft_strtrim(s + i, &c);
	if (ft_strlen(temp_s) > 0)
		n_elem++;
	while (*(temp_s + i))
	{
		if (*(temp_s + i) == c)
		{
			temp_s = ft_strtrim(temp_s + i, &c);
			n_elem++;
			i = 0;
		}
		i++;
	}
	free(temp_s);
	return (n_elem);
}

char	**ft_split(char const *s, char c)
{
	char			**arr;
	char			*temp_s;
	unsigned int	i;
	unsigned int	split_i;
	unsigned int	n_elem;

	n_elem = ft_get_n_elem(s, c);
	arr = malloc(sizeof(char *) * (n_elem + 1));
	temp_s = ft_strtrim(s, &c);
	split_i = 0;
	i = 0;
	while (split_i < n_elem)
	{
		*(arr + split_i) = ft_substr(temp_s + i, i, ft_strflen(temp_s + i, c));
		i += ft_strlen(*(arr + split_i));
		temp_s = ft_strtrim(temp_s + i, &c);
		i = 0;
		split_i++;
	}
	*(arr + split_i) = 0;
	free(temp_s);
	return (arr);
}
