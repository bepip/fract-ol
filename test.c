/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 11:34:37 by pibernar          #+#    #+#             */
/*   Updated: 2024/05/28 17:35:10 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minilibx/mlx.h"
#include "minilibx/mlx_int.h"
#include <stdlib.h>
#define WIDTH 1080
#define HEIGHT 720
#define MAX_ITERATION 50 

typedef struct s_fractal {
	char	*name;
	void	*mlx;
	void	*win;
	void	*img;
	int	*buf;
	int	bits_per_pixel;
	int	line_length;
	int	endian;
	double	x;
	double	y;
	double	x0;
	double	y0;
	double	a;
	double	b;
	double	c;
	double	d;
}	t_fractal;

int	closewindow(int key, t_fractal *f)
{
	mlx_destroy_window(f->mlx, f->win);
	return 0;
}

int	ft_color(int iteration)
{
	if(iteration == MAX_ITERATION)
		return (0x000000);
	return 0xABCDEF;
}
#include <stdio.h>
void	ft_draw_on_image(t_fractal f)
{
	double	x2 = 0.0;
	double	y2 = 0.0;
	int	iteration;
	int	px = 0;
	int	py = 0;

	while (py++ < HEIGHT)
	{
		px = 0;
		while (px++ < WIDTH)
		{
			f.x0 = ((f.b-f.a)/WIDTH) * px + f.a;
			f.y0 = ((f.c-f.d)/HEIGHT) * py + f.d;
			x2 = 0.0;
			y2 = 0.0;
			f.x = 0.0;
			f.y = 0.0;
			iteration = 0;
			while (x2 + y2 <= 4 && iteration < MAX_ITERATION)
			{
				f.y = (f.x+f.x)*f.y +f.y0;
				f.x = x2 - y2 + f.x0;
				x2 = f.x * f.x;
				y2 = f.y * f.y;
				iteration++;
			}
			f.buf[py * f.line_length/4 + px] = ft_color(iteration);
		}
	}

}

int	main()
{
	t_fractal f;
	f.a = -2.0;
	f.b = 0.47;
	f.c = -1.12;
	f.d = 1.12;
	f.name = "mandelbrot";
	f.mlx = mlx_init();
	f.win = mlx_new_window(f.mlx, WIDTH, HEIGHT, f.name);
	f.img = mlx_new_image(f.mlx, WIDTH, HEIGHT);
	f.buf = (int *)mlx_get_data_addr(f.img, &f.bits_per_pixel, &f.line_length, &f.endian);
	ft_draw_on_image(f);
	mlx_put_image_to_window(f.mlx, f.win, f.img,0,0);
	mlx_loop(f.mlx);
	return 0;
}
