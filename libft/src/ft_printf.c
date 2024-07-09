/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:12:11 by pibernar          #+#    #+#             */
/*   Updated: 2024/07/09 13:32:13 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_format(char c, va_list args)
{
	if (c == 'c')
		return (ft_printchar(va_arg(args, int)));
	if (c == 's')
		return (ft_printstr(va_arg(args, char *)));
	if (c == 'p')
		return (ft_printptr(va_arg(args, long unsigned int)));
	if (c == 'd' || c == 'i')
		return (ft_printdecimal(va_arg(args, int)));
	if (c == 'u')
		return (ft_printunint(va_arg(args, unsigned int)));
	if (c == 'x')
		return (ft_printhexa(va_arg(args, unsigned int), 'x'));
	if (c == 'X')
		return (ft_printhexa(va_arg(args, unsigned int), 'X'));
	if (c == '%')
		return (ft_printpercent());
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		input_size;

	va_start(args, str);
	input_size = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			input_size += ft_format(*str, args);
		}
		else
		{
			ft_putchar((int)*str);
			input_size++;
		}
		str++;
	}
	va_end(args);
	return (input_size);
}
