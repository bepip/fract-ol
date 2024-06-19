/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_events.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:03:13 by pibernar          #+#    #+#             */
/*   Updated: 2024/06/19 16:50:55 by pibernar         ###   ########.fr       */
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
