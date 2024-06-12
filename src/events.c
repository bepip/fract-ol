/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 12:34:15 by pibernar          #+#    #+#             */
/*   Updated: 2024/06/12 14:30:01 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
static int	zoom(t_fractal *f, double zoom)
{
	double len_x;
	double len_y;

	len_x = (f->a - f->b);
	len_y = (f->d - f->c);
	f->b = f->b + 0.5 * (1 - zoom) * len_x;
	f->a = f->b + len_x * zoom;
	f->c = f->c + 0.5 * (1 - zoom) * len_y;
	f->d = f->c + len_y * zoom;
}

int	fractal_shift(int key, t_fractal *f)
{
	if (key == 65361 || key == 97)
	{
		f->a -= 0.5 * f->zoom;
		f->b -= 0.5 * f->zoom;
	}
	else if (key == 65363 || key == 100)
	{
		f->a += 0.5 * f->zoom;
		f->b += 0.5 * f->zoom;
	}
	else if (key == 65362 || key == 119)
	{
		f->c += 0.5 * f->zoom;
		f->d += 0.5 * f->zoom;
	}
	else if (key == 65364 || key == 115)
	{
		f->c -= 0.5 * f->zoom;
		f->d -= 0.5 * f->zoom;
	}
	return (0);
}

int	fractal_zoom(int key, int x, int y, t_fractal *f)
{
	if (key == 4)
	{
		zoom(f, 0.9);
		f->zoom *=0.9;
	}
	if (key == 5)
	{
		zoom(f, 1.1);
		f->zoom *= 1.1; 
	}
	return (0);
}

int	fractal_iteration(int key, t_fractal *f)
{
	if (key == 65451)
		f->max_iteration += 10;
	else if ((key == 65453 || key == 45) && f->max_iteration > 10)
		f->max_iteration -= 10;
	return (0);
}

//TODO add close for X
int	close_window(int key, t_fractal *f)
{
	if (key == 65307)
	{
		free_fractal(f);
	}
	return (0);
}
