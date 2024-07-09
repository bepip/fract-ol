/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdecimal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:42:24 by pibernar          #+#    #+#             */
/*   Updated: 2024/07/09 09:36:35 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size_num(int n)
{
	int		size;
	long	num;

	size = 0;
	num = (long)n;
	if (num < 0)
	{
		num *= -1;
		size++;
	}
	while (num / 10)
	{
		size++;
		num /= 10;
	}
	size++;
	return (size);
}

int	ft_printdecimal(int n)
{
	ft_putnbr(n);
	return (ft_size_num(n));
}
