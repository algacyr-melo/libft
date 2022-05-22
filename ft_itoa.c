/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almelo <almelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 10:58:48 by almelo            #+#    #+#             */
/*   Updated: 2022/05/22 15:26:01 by almelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbrlen(int n)
{
	size_t	len;

	len = 1;
	while (n)
	{
		n /= 10;
		len++;
	}	
	return (len);
}

static unsigned int	ft_gen_digits(int n, char *s)
{
	unsigned int	i;

	i = 0;
	while (n > 0)
	{
		*(s + i) = (n % 10) + '0';
		n /= 10;
		i++;
	}
	return (i);
}

static void	ft_strrev(char *s)
{
	unsigned int	i;
	unsigned int	mirror_i;
	char			temp;

	i = 0;
	while (i < (ft_strlen(s) / 2))
	{
		mirror_i = (ft_strlen(s) - 1) - i;
		temp = *(s + i);
		*(s + i) = *(s + mirror_i);
		*(s + mirror_i) = temp;
		i++;
	}
}

char	*ft_itoa(int n)
{
	char			*str;
	size_t			b_size;
	unsigned int	i;
	int				is_negative;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	is_negative = 0;
	b_size = ft_nbrlen(n) + 1;
	if (n < 0)
	{
		is_negative = 1;
		n *= -1;
		b_size++;
	}
	str = malloc(b_size);
	i = ft_gen_digits(n, str);
	if (is_negative)
		*(str + i) = '-';
	ft_strrev(str);
	return (str);
}
