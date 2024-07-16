/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_set.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42Luxembourg.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:18:20 by pibernar          #+#    #+#             */
/*   Updated: 2024/07/11 14:27:11 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	change_set(int key, t_fractal *fractal)
{
	t_input	input;

	input.x0 = -0.8;
	input.y0 = 0.156;
	input.name = "julia";
	if (key == 99)
	{
		if (!ft_strncmp(fractal->name, "mandelbrot", 11))
		{
			julia_init(fractal, input);
		}
		else
		{
			mandelbrot_init(fractal);
		}
	}
	return (0);
}
