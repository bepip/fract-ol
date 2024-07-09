/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 18:03:10 by pibernar          #+#    #+#             */
/*   Updated: 2024/07/09 12:42:57 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static double	add_digits(char *str)
{
	double	n;
	int		div;
	int		i;

	n = 0;
	i = 0;
	div = 10;
	while (str[i] && ft_isdigit(str[i]))
	{
		n = n + (double)(str[i] - '0') / div;
		div *= 10;
		i++;
	}
	return (n);
}

double	ft_atod(char *str)
{
	double	n;
	int		sign;
	int		i;

	n = 0;
	i = 0;
	sign = 1;
	while ((str[i] <= 13 && str[i] >= 7) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		i++;
		sign *= -1;
	}
	while (str[i] != '.' && str[i] && ft_isdigit(str[i]))
		n = n * 10 + str[i++] - '0';
	i++;
	n += add_digits(&str[i]);
	return (sign * n);
}
