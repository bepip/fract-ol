/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:17:50 by pibernar          #+#    #+#             */
/*   Updated: 2024/07/09 12:36:52 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_color(t_fractal *f, unsigned int iter)
{
	if (iter == f->max_iteration)
		return (0x00000000);
	else if (f->palette == 1)
		return (0x000A000A * (iter % 255));
	else if (f->palette == 2)
		return (0x00000A0A * (iter % 255));
	else if (f->palette == 3)
		return (0x000A0A00 * (iter % 255));
	else if (f->palette == 4)
		return (0x000000AA * (iter % 255));
	else if (f->palette == 5)
		return (0x00AA0000 * (iter % 255));
	else if (f->palette == 6)
		return (0x0000AA00 * (iter % 255));
	else if (f->palette == 7)
		return (0x00ABCDEF * (iter % 255));
	else if (f->palette == 8)
		return (0x006495ED * (iter % 255));
	else if (f->palette == 9)
		return (0x0094f920 * (iter % 255));
	return (0);
}
