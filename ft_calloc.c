/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almelo <almelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:29:46 by almelo            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/05/25 13:25:17 by almelo           ###   ########.fr       */
=======
/*   Updated: 2022/05/26 11:08:33 by almelo           ###   ########.fr       */
>>>>>>> f00726c724ea07c3d8ecfdaa279bf51bdd75015a
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*buffer;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	buffer = malloc(count * size);
<<<<<<< HEAD
	if (buffer == 0)
=======
	if (!buffer)
>>>>>>> f00726c724ea07c3d8ecfdaa279bf51bdd75015a
		return (0);
	ft_bzero(buffer, (count * size));
	return (buffer);
}

//int	main(void)
//{
//	void	*buffer;
//
//	buffer = ft_calloc(4, sizeof(char *));
//	free(buffer);
//	return (0);
//}
