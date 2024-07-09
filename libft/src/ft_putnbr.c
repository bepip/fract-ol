/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:14:28 by pibernar          #+#    #+#             */
/*   Updated: 2024/07/09 09:38:44 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int	sign;

	sign = 1;
	if (n < 0)
	{
		sign *= -1;
		ft_putchar('-');
	}
	if (n / 10)
		ft_putnbr(n / 10 * sign);
	ft_putchar('0' + n % 10 * sign);
}
