/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almelo <almelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 10:58:48 by almelo            #+#    #+#             */
/*   Updated: 2022/05/19 21:21:05 by almelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_nbrtochr(unsigned int n)
{
	n = n + '0';
	return (n);
}

static unsigned int ft_power(int n, int power)
{
	unsigned int	result;

	result = 1;
	while (power)
	{
		result *= n; 
		power--;
	}
	return (result);
}

static size_t	ft_nbrlen(int n)
{
	size_t	len;

	len = 1;
	while (n /= 10)
		len++;	
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	size_t			b_size;
	unsigned int	power;
	unsigned int	i;
	
	b_size = ft_nbrlen(n) + 1;
	if (n < 0)
		b_size++;
	str = malloc(b_size);
	i= 0;
	if (n < 0)
	{
		n *= -1;
		*(str + i) = '-';
		i++;
	}
	while ((power = ft_nbrlen(n) - 1))
	{
		*(str + i) = ft_nbrtochr(n / ft_power(10, power));
		if (power == 1)
			*(str + i + 1) = ft_nbrtochr(n % ft_power(10, power));	
		n -= (n / ft_power(10, power)) * ft_power(10, power);
		i++;
	}
	return (str);
}
