/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:39:26 by pibernar          #+#    #+#             */
/*   Updated: 2024/07/09 09:37:05 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_size_hexa(unsigned int n)
{
	int	size;

	size = 0;
	while (n / 16)
	{
		n /= 16;
		size++;
	}
	size++;
	return (size);
}

int	ft_printhexa(unsigned int n, char c)
{
	int	ret;

	ret = ft_size_hexa(n);
	if (n / 16)
		ft_printhexa(n / 16, c);
	n %= 16;
	if (n <= 9)
		ft_putchar('0' + n);
	else
		ft_putchar(c - 33 + n);
	return (ret);
}
