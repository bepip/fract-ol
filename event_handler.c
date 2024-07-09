/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 12:47:29 by pibernar          #+#    #+#             */
/*   Updated: 2024/07/09 13:25:30 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	key_handler(int key, t_fractal *f)
{
	if (!f)
		return (1);
	fractal_shift(key, f);
	fractal_iteration(key, f);
	change_color(key, f);
	close_window(key, f);
	render(f);
	return (0);
}

int	mouse_handler(int key, int x, int y, t_fractal *f)
{
	if (!f)
		return (1);
	fractal_zoom(key, f);
	get_pos(key, x, y);
	render(f);
	return (0);
}
