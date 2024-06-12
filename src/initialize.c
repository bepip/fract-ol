/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 12:17:06 by pibernar          #+#    #+#             */
/*   Updated: 2024/06/12 13:15:06 by pibernar         ###   ########.fr       */
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

static void	julia_init(t_fractal *f)
{
	printf("Julia_init");
}

t_fractal	init_fractal(char *name)
{
	t_fractal	f;

	if (!ft_strncmp(name, "mandelbrot", 11))
	{
		mandelbrot_init(&f);
	}	
	else if (!ft_strncmp(name, "julia", 6))
	{
		julia_init(&f);
	}
	else
	{
		ft_printf("Failed at init!");
	}
	f.max_iteration = 60;
	f.zoom = 1;
	f.mlx = mlx_init();
	f.win = mlx_new_window(f.mlx, WIDTH, HEIGHT, f.name);
	f.img = mlx_new_image(f.mlx, WIDTH, HEIGHT);
	f.buf = (int *)mlx_get_data_addr(f.img, &f.bpp, &f.size, &f.endian);
	return (f);
}
