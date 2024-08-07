/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:21:50 by pibernar          #+#    #+#             */
/*   Updated: 2024/07/11 14:22:25 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "minilibx/mlx.h"
# include "minilibx/mlx_int.h"
# include "libft/libft.h"
# include <stdlib.h>
# include <math.h>

# define WIDTH 800
# define HEIGHT 800

/*
 * z -> z**2 + c,
 * initial value:
 * z0 = x0 + y0*i
 * boundries:
 * z = x + y * i
 * with x ∈ [a,b]
 * 	y ∈ [c,d]
 *
 */

typedef struct s_input
{
	char	*name;
	double	x0;
	double	y0;
}	t_input;

typedef struct s_fractal
{
	unsigned int	max_iteration;
	char			*name;
	void			*mlx;
	void			*win;
	void			*img;
	int				*buf;
	int				bpp;
	int				size;
	int				endian;
	int				palette;
	double			cx;
	double			cy;
	double			x0;
	double			y0;
	double			a;
	double			b;
	double			c;
	double			d;
	double			zoom;
}	t_fractal;

// init
void	blank_fractal(t_fractal *f);
int		init_fractal(t_fractal *f, t_input input);

// fractal

void	mandelbrot_init(t_fractal *f);
void	julia_init(t_fractal *f, t_input input);
int		mandelbrot(t_fractal *f, int px, int py);
int		julia(t_fractal *f, int px, int py);
int		ft_color(t_fractal *f, unsigned int iter);
// render

int		render(t_fractal *f);

// key_handlers

int		key_handler(int key, t_fractal *fractal);
int		mouse_handler(int key, int x, int y, t_fractal *fractal);
int		fractal_shift(int key, t_fractal *fractal);
int		fractal_zoom(int key, t_fractal *fractal);
int		get_pos(int key, int x, int y);
int		print_options(int key);
int		change_set(int key, t_fractal *fractal);
int		change_julia_set(int key, int x, int y, t_fractal *f);
int		fractal_iteration(int keycode, t_fractal *fractal);
int		change_color(int key, t_fractal *f);
int		close_window(int keycode, t_fractal *f);

//utils.c
double	ft_atod(char *str);

//input_check
int		input_check(int ac, char *av[]);
t_input	set_input(int ac, char *av[]);	
void	input_message(void);
void	option_message(void);

// free
int		free_fractal(t_fractal *f);

#endif
