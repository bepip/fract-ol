/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:21:00 by pibernar          #+#    #+#             */
/*   Updated: 2024/06/19 16:47:55 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	main(int ac, char *av[])
{
	t_fractal	f;
	t_input		input;

	if (!input_check(ac, av))
	{
		input_message();
		return (0);
	}
	option_message();
	input = set_input(ac, av);
	init_fractal(&f, input);
	render(&f);
	mlx_hook(f.win, 17, 0, free_fractal, &f);
	mlx_key_hook(f.win, key_handler, &f);
	mlx_mouse_hook(f.win, mouse_handler, &f);
	mlx_loop(f.mlx);
	return (0);
}
