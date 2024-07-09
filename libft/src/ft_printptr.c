/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:37:42 by pibernar          #+#    #+#             */
/*   Updated: 2024/07/09 09:37:43 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size_ptr(long unsigned int ptr)
{
	int	size;

	size = 0;
	while (ptr / 16)
	{
		ptr /= 16;
		size++;
	}
	size++;
	return (size);
}

void	ft_puthexa(long unsigned int p)
{
	if (p / 16)
		ft_puthexa(p / 16);
	p %= 16;
	if (p <= 9)
		ft_putchar('0' + p);
	else
		ft_putchar('a' - 10 + p);
}

int	ft_printptr(long unsigned int p)
{
	int	res;

	res = ft_size_ptr(p);
	if (p == 0)
	{
		ft_putstr("(nil)");
		return (5);
	}
	ft_putstr("0x");
	res += 2;
	ft_puthexa(p);
	return (res);
}
