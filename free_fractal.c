/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_fractal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:12:11 by pibernar          #+#    #+#             */
/*   Updated: 2024/06/19 11:37:08 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	free_fractal(t_fractal *f)
{
	if (!f)
		exit(0);
	if (f->img)
		mlx_destroy_image(f->mlx, f->img);
	if (f->mlx && f->win)
		mlx_destroy_window(f->mlx, f->win);
	if (f->mlx)
	{
		mlx_destroy_display(f->mlx);
		mlx_loop_end(f->mlx);
		free(f->mlx);
	}
	exit(0);
}
