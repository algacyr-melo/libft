/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almelo <almelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:22:36 by almelo            #+#    #+#             */
/*   Updated: 2022/05/18 12:29:36 by almelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char			*dup;
	unsigned int	i;

	dup = malloc(ft_strlen(s1) + 1);
	i = 0;
	while (*(s1 + i))
	{
		*(dup + i) = *(s1 + i);
		i++;
	}
	*(dup + i) = '\0';
	return (dup);
}
