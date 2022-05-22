/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almelo <almelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 22:02:18 by almelo            #+#    #+#             */
/*   Updated: 2022/05/22 12:40:45 by almelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*buffer;
	unsigned int	i;

	buffer = malloc(ft_strlen(s) + 1);
	i = 0;
	while (*(s + i))
	{
		*(buffer + i) = (*f)(i, *(s + i));
		i++;
	}
	return (buffer);
}
