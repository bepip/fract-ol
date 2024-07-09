/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:36:13 by pibernar          #+#    #+#             */
/*   Updated: 2024/06/19 16:48:53 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static int	fractal_selection(t_fractal *f, int px, int py)
{
	int	iter;

	iter = 0;
	if (!ft_strncmp("mandelbrot", f->name, 11))
		iter = mandelbrot(f, px, py);
	else if (!ft_strncmp("julia", f->name, 6))
		iter = julia(f, px, py);
	return (iter);
}

int	render(t_fractal *f)
{
	int	px;
	int	py;
	int	iter;

	if (!f)
		return (1);
	iter = 0;
	py = -1;
	while (++py < HEIGHT)
	{
		px = -1;
		while (++px < WIDTH)
		{
			iter = fractal_selection(f, px, py);
			f->buf[(py * f->size) / 4 + px] = ft_color(f, iter);
		}
	}
	mlx_put_image_to_window(f->mlx, f->win, f->img, 0, 0);
	return (0);
}
