/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 18:03:10 by pibernar          #+#    #+#             */
/*   Updated: 2024/06/19 16:50:13 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static double	add_digits(char *str)
{
	double	n;
	int		div;

	n = 0;
	div = 10;
	while (*str && ft_isdigit(*str))
	{
		n = n + (double)(*str - '0') / div;
		div *= 10;
		*str++;
	}
	return (n);
}

double	ft_atod(char *str)
{
	double	n;
	int		sign;

	n = 0;
	sign = 1;
	while ((*str <= 13 && *str >= 7) || *str == 32)
		*str++;
	if (*str == '-')
	{
		*str++;
		sign *= -1;
	}
	while (*str != '.' && *str && ft_isdigit(*str))
		n = n * 10 + *str++ - '0';
	*str++;
	n += add_digits(str);
	return (sign * n);
}
