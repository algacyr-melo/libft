/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almelo <almelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 12:06:17 by almelo            #+#    #+#             */
/*   Updated: 2022/05/19 22:01:35 by almelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c);

static int	ft_isspace(int c)
{
	return (c == '\t'
		||c == '\n'
		||c == '\v'
		||c == '\f'
		||c == '\r'
		||c == ' ');
}

int	ft_atoi(const char *str)
{
	char	sign;
	int		result;

	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = '-';
		str++;
	}
	result = 0;
	while (ft_isdigit(*str))
	{
		result = result * 10 + (*(str) - '0');
		str++;	
	}
	if (sign == '-')
		result *= -1;	
	return (result);
}
