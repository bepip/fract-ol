/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 12:47:29 by pibernar          #+#    #+#             */
/*   Updated: 2024/06/12 13:36:41 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	key_handler(int key, t_fractal *f)
{
	fractal_shift(key, f);
	fractal_iteration(key, f);
	close_window(key, f);
	render(f);
	return (0);
}

int	mouse_handler(int key, int x, int y, t_fractal *f)
{
	fractal_zoom(key, x, y, f);
	render(f);
	return (0);
}
