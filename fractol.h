/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:21:50 by pibernar          #+#    #+#             */
/*   Updated: 2024/05/28 12:40:26 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

#include "minilibx/mlx.h"

# define WIDTH 1980
# define HEIGHT 1080 
# define MAX_ITERATION 30


typedef struct s_vars {
	void	*mlx;
	void	*win;
}	t_vars;

typedef struct s_data {
	void	*img;
	char	*addr;
	int	bpp;
	int	line_length;
	int	endian;
}	t_data;

void	ft_mlx_pixel_put(t_data *data, int x, int y, int color);

#endif
