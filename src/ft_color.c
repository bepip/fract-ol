/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:17:50 by pibernar          #+#    #+#             */
/*   Updated: 2024/06/12 11:58:22 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_color(t_fractal *f, int iter)
{
	double scale;

	scale = f->max_iteration / 5;

	if (iter > scale*4)
		return (0x00000000);
	else if (iter > scale*4)
		return (0x0000008B);
	else if (iter > scale*3)
		return (0x000000FF);
	else if (iter > scale*2)
		return (0x006495ED);
	else if (iter > scale)
		return (0x007DF9FF);
	return (0x0000FFFF);
	
}
