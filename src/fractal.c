/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractal.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:07:46 by pibernar          #+#    #+#             */
/*   Updated: 2024/06/12 12:55:24 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	mandelbrot(t_fractal *f, int px, int py)
{
	double	x;
	double 	y;
	double	x2;
	double	y2;
	int	iteration;

	x = 0;
	y = 0;
	x2 = 0.0;
	y2 = 0.0;
	iteration = 0;
	f->x0 = (((f->b - f->a)/WIDTH) * px + f->a);
	f->y0 = (((f->c - f->d)/HEIGHT) * py + f->d);
	while (x2 + y2 <= 4 && iteration < f->max_iteration)
	{
		y = (x + x) * y +f->y0;
		x = x2 - y2 + f->x0;
		x2 = x * x;
		y2 = y * y;
		iteration++;
	}
	return (iteration);
}


int	julia(t_fractal *f, int px, int py)
{
	double	x2;
	double	y2;
	int	iteration;

	x2 = 0.0;
	y2 = 0.0;
	iteration = 0;

	return (iteration);
}
