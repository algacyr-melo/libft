/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almelo <almelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 12:06:10 by almelo            #+#    #+#             */
/*   Updated: 2022/05/27 14:07:00 by almelo           ###   ########.fr       */
/*   Updated: 2022/05/26 15:20:39 by almelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strrev(const char *str)
{
	char			*s_copy;
	char			temp;
	unsigned int	i;

	s_copy = ft_strdup(str);
	if (!s_copy)
		return (0);
	i = 0;
	while (i < ft_strlen(str) / 2)
	{
		temp = *(s_copy + i);
		*(s_copy + i) = *(s_copy + (ft_strlen(s_copy) - 1) - i);
		*(s_copy + (ft_strlen(s_copy) - 1) - i) = temp;
		i++;
	}
	return (s_copy);
}

static unsigned int	ft_get_offset(char const *str, char const *set)
{
	unsigned int	offset;
	unsigned int	set_i;

	offset = 0;
	set_i = 0;
	while (*(set + set_i))
	{
		if (*(str + offset) == *(set + set_i))
		{
			offset++;
			set_i = 0;
			continue ;
		}
		set_i++;
	}
	return (offset);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	l_offset;
	unsigned int	r_offset;
	size_t			t_len;
	char			*buffer;
	char			*rev_s1;

	l_offset = ft_get_offset(s1, set);
	rev_s1 = ft_strrev(s1);
	if (!rev_s1)
		return (0);
	r_offset = ft_get_offset(rev_s1, set);
	free(rev_s1);
	t_len = ft_strlen(s1) - (l_offset + r_offset);
	buffer = ft_substr(s1, l_offset, t_len);
	if (!buffer)
		return (0);
	return (buffer);
}
