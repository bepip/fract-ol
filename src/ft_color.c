/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:17:50 by pibernar          #+#    #+#             */
/*   Updated: 2024/06/19 16:41:23 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_color(t_fractal *f, int iter)
{
	if (iter == f->max_iteration)
		return (0x00000000);
	else if (f->palette == 1)
		return (0x00000099 * (iter % 255));
	else if (f->palette == 2)
		return (0x00990000 * (iter % 255));
	else if (f->palette == 3)
		return (0x00009900 * (iter % 255));
	else if (f->palette == 4)
		return (0x00009999 * (iter % 255));
	else if (f->palette == 5)
		return (0x00303030 * (iter % 255));
	else if (f->palette == 6)
		return (0x00990099 * (iter % 255));
	else if (f->palette == 7)
		return (0x00999900 * (iter % 255));
	else if (f->palette == 8)
		return (0x00FF99FF * (iter % 255));
	else if (f->palette == 9)
		return (0x006495ED * (iter % 255));
	return (0);
}
