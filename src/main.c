/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:21:00 by pibernar          #+#    #+#             */
/*   Updated: 2024/06/12 13:29:34 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
int	main(int ac, char *av[])
{
	/*if (!input_check(ac, av))
	{
		input_message();
		return (0);
	}
	ft_printf("success");*/
	t_fractal	f = init_fractal("mandelbrot");
	render(&f);
	mlx_key_hook(f.win, key_handler, &f);
	mlx_mouse_hook(f.win, mouse_handler, &f);
	mlx_loop_hook(f.win, key_handler, &f);
	mlx_loop(f.mlx);


	return (0);
}
