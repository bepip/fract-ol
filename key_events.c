/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_events.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 12:34:15 by pibernar          #+#    #+#             */
/*   Updated: 2024/06/19 13:56:04 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

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

int	fractal_iteration(int key, t_fractal *f)
{
	if (key == 65451)
		f->max_iteration += 10;
	else if ((key == 65453 || key == 45) && f->max_iteration > 10)
		f->max_iteration -= 10;
	return (0);
}

int	close_window(int key, t_fractal *f)
{
	if (key == 65307)
	{
		free_fractal(f);
	}
	return (0);
}

int	change_color(int key, t_fractal *f)
{
	if (key == 49 || key == 65436)
		f->palette = 1;
	if (key == 50 || key == 65433)
		f->palette = 2;
	if (key == 51 || key == 65435)
		f->palette = 3;
	if (key == 52 || key == 65430)
		f->palette = 4;
	if (key == 53 || key == 65437)
		f->palette = 5;
	if (key == 54 || key == 65432)
		f->palette = 6;
	if (key == 55 || key == 65429)
		f->palette = 7;
	if (key == 56 || key == 65431)
		f->palette = 8;
	if (key == 57 || key == 65434)
		f->palette = 9;
	return (0);
}

int	print_options(int key)
{
	if (key == 111)
		option_message();
	return (0);
}
