/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractal.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:07:46 by pibernar          #+#    #+#             */
/*   Updated: 2024/05/28 11:39:52 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_fractal(t_data *data)
{
	int	iteration;
	int	px;
	int	py;

	px = 0;
	py = 0;
	interation = 0;

	while (px < WIDTH)
	{
		py = 0;
		while (py < HEIGHT)
		{
			while (x2 + y2 <= 4 && iteration < MAX_ITERATION)
			{
				y = (x + x)*y + y0;
				x = x2 -y2 + x0;
				x2 = x * x;
				y2 = y * y;
				ieration++;
			}
			color = ft_color(iteration);
			ft_mlx_pixel_put(data, px, py++, color);
		}
		px++;
	}
}
