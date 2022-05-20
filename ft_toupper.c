/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almelo <almelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:18:08 by almelo            #+#    #+#             */
/*   Updated: 2022/05/10 16:24:29 by almelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_islower(int c);

static int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_toupper(int c)
{
	if (ft_islower(c))
		c -= ('c' - 'C');
	return (c);
}
