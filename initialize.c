/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 12:17:06 by pibernar          #+#    #+#             */
/*   Updated: 2024/06/19 17:06:29 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "fractol.h"

static void	mandelbrot_init(t_fractal *f)
{
	f->a = -2.0;
	f->b = 0.47;
	f->c = -1.12;
	f->d = 1.12;
	f->name = "mandelbrot";
}

static void	julia_init(t_fractal *f, t_input input)
{
	f->a = -2.0;
	f->b = 2.0;
	f->c = -2.0;
	f->d = 2.0;
	f->name = input.name;
	f->x0 = input.x0;
	f->y0 = input.y0;
	f->palette = 9;
}

static int	set_boundries(t_fractal *f, t_input input)
{
	if (!ft_strncmp(input.name, "mandelbrot", 11))
		mandelbrot_init(f);
	else if (!ft_strncmp(input.name, "julia", 6))
		julia_init(f, input);
	return (0);
}

void	blank_fractal(t_fractal *f)
{
	f->name = NULL;
	f->mlx = NULL;
	f->win = NULL;
	f->img = NULL;
	f->bpp = 0;
	f->size = 0;
	f->endian = 0;
	f->max_iteration = 0;
	f->palette = 0;
	f->cx = 0.0;
	f->cy = 0.0;
	f->x0 = 0.0;
	f->y0 = 0.0;
	f->a = 0.0;
	f->b = 0.0;
	f->c = 0.0;
	f->b = 0.0;
	f->zoom = 0.0;
}

int	init_fractal(t_fractal *f, t_input input)
{
	if (!f)
		return (1);
	blank_fractal(f);
	f->max_iteration = 60;
	f->zoom = 1;
	f->palette = 1;
	set_boundries(f, input);
	f->mlx = mlx_init();
	f->win = mlx_new_window(f->mlx, WIDTH, HEIGHT, f->name);
	f->img = mlx_new_image(f->mlx, WIDTH, HEIGHT);
	f->buf = (int *)mlx_get_data_addr(f->img, &f->bpp, &f->size, &f->endian);
	return (0);
}
