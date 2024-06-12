/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 12:55:23 by pibernar          #+#    #+#             */
/*   Updated: 2024/06/12 10:30:35 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	input_check(int ac, char *av[])
{
	double	cx;
	double	cy;

	if (ac < 2)
		return (0);
	if (!ft_strncmp("mandelbrot", av[1], 11))
		return (1);
	if (ft_strncmp("julia", av[1], 6) && ac == 4)
		return (1);
	return (0);
}

void	input_message(void)
{
	ft_printf("=============================================\n");
	ft_printf(" Available inputs:                           \n");
	ft_printf("        mandelbrot                           \n");
	ft_printf("        julia                                \n");
	ft_printf(" You must add values for the julia fractal.  \n");
	ft_printf(" Example:./fractol \"julia\" \"-0.8\" \"0.156 \"\n");
	ft_printf("==============================================\n");
}
