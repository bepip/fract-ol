/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_fractal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:12:11 by pibernar          #+#    #+#             */
/*   Updated: 2024/06/12 13:30:09 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	free_fractal(t_fractal *f)
{
	mlx_clear_window(f->mlx, f->win);
	mlx_destroy_window(f->mlx, f->win);
	return (0);
}
