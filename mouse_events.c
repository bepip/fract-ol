/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_events.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:03:13 by pibernar          #+#    #+#             */
/*   Updated: 2024/07/09 14:10:26 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static int	zoom(t_fractal *f, double zoom)
{
	double	len_x;
	double	len_y;

	len_x = (f->a - f->b);
	len_y = (f->d - f->c);
	f->b = f->b + 0.5 * (1 - zoom) * len_x;
	f->a = f->b + len_x * zoom;
	f->c = f->c + 0.5 * (1 - zoom) * len_y;
	f->d = f->c + len_y * zoom;
	return (0);
}

int	fractal_zoom(int key, t_fractal *f)
{
	if (key == 4)
	{
		zoom(f, 0.9);
		f->zoom *= 0.9;
	}
	if (key == 5)
	{
		zoom(f, 1.1);
		f->zoom *= 1.1;
	}
	return (0);
}

int	get_pos(int key, int x, int y)
{
	if (key == 3)
		ft_printf("mouse position: (x=%d;y=%d)\n", x, y);
	return (0);
}

int	change_julia_set(int key, int x, int y, t_fractal *f)
{
	double	coord_x;
	double	coord_y;
	double	len_x;
	double	len_y;

	len_x = (f->b - f->a);
	len_y = (f->c - f->d);
	coord_x = (len_x) / WIDTH * x + f->a;
	coord_y = (len_y) / (HEIGHT) * y + f->d;
	if (key == 1 && !ft_strncmp(f->name, "julia", 6))
	{
		f->x0 = coord_x;
		f->y0 = coord_y;
	}
	return (0);
}
