/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almelo <almelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:22:36 by almelo            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/05/25 13:26:15 by almelo           ###   ########.fr       */
=======
/*   Updated: 2022/05/26 11:31:56 by almelo           ###   ########.fr       */
>>>>>>> f00726c724ea07c3d8ecfdaa279bf51bdd75015a
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char			*dup;
	unsigned int	i;

<<<<<<< HEAD
	dup = malloc(ft_strlen(s1) + 1);
	if (dup == 0)
=======
	dup = ft_calloc(ft_strlen(s1) + 1, sizeof(*s1));
	if (!dup)
>>>>>>> f00726c724ea07c3d8ecfdaa279bf51bdd75015a
		return (0);
	i = 0;
	while (*(s1 + i))
	{
		*(dup + i) = *(s1 + i);
		i++;
	}
	*(dup + i) = '\0';
	return (dup);
}
