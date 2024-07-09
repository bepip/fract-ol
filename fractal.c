/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractal.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:07:46 by pibernar          #+#    #+#             */
/*   Updated: 2024/07/09 13:35:49 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	mandelbrot(t_fractal *f, int px, int py)
{
	unsigned int	iteration;
	double			x;
	double			y;
	double			x2;
	double			y2;

	x = 0;
	y = 0;
	x2 = 0.0;
	y2 = 0.0;
	iteration = 0;
	f->cx = (((f->b - f->a) / WIDTH) * px + f->a);
	f->cy = (((f->c - f->d) / HEIGHT) * py + f->d);
	while (x2 + y2 <= 4 && iteration < f->max_iteration)
	{
		y = (x + x) * y + f->cy;
		x = x2 - y2 + f->cx;
		x2 = x * x;
		y2 = y * y;
		iteration++;
	}
	return (iteration);
}

int	julia(t_fractal *f, int px, int py)
{
	unsigned int	iteration;
	double			x;
	double			y;
	double			x2;
	double			y2;

	iteration = 0;
	x = (((f->b - f->a) / WIDTH) * px + f->a);
	y = (((f->c - f->d) / HEIGHT) * py + f->d);
	x2 = x * x;
	y2 = y * y;
	while (x2 + y2 <= 4 && iteration < f->max_iteration)
	{
		y = (x + x) * y + f->y0;
		x = x2 - y2 + f->x0;
		x2 = x * x;
		y2 = y * y;
		iteration++;
	}
	return (iteration);
}
