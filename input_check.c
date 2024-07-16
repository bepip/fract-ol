/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 12:55:23 by pibernar          #+#    #+#             */
/*   Updated: 2024/07/11 14:30:36 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	input_check(int ac, char *av[])
{
	if (ac < 2)
		return (0);
	if (!ft_strncmp("mandelbrot", av[1], 11) && ac == 2)
		return (1);
	if (!ft_strncmp("julia", av[1], 6) && ac == 4)
		return (1);
	return (0);
}

t_input	set_input(int ac, char *av[])
{
	t_input	input;

	input.name = av[1];
	if (ac == 2)
	{
		input.x0 = 0;
		input.y0 = 0;
		return (input);
	}
	input.x0 = ft_atod(av[2]);
	input.y0 = ft_atod(av[3]);
	return (input);
}

void	option_message(void)
{
	ft_printf("==========================================\n");
	ft_printf("\t\tControls:\n");
	ft_printf("\tW,A,S,D / arrows: Move around.\n");
	ft_printf("\tMouse Wheel: Zoom in or out.\n");
	ft_printf("\t1-9: Change color scheme\n");
	ft_printf("\tc: change fractal type\n");
	ft_printf("\to: show options\n");
	ft_printf("\t+/-: increase/decrease details\n");
	ft_printf("\tright click: show position\n");
	ft_printf("\tleft click: change julia set\n");
	ft_printf("==========================================\n");
}

void	input_message(void)
{
	ft_printf("==============================================\n");
	ft_printf("Available fractals:                          \n");
	ft_printf("\tmandelbrot                           \n");
	ft_printf("\tjulia                                \n");
	ft_printf("You must add values for the julia fractal.  \n");
	ft_printf("Example:./fractol \"julia\" \"-0.8\" \"0.156 \"\n");
	ft_printf("==============================================\n");
}
