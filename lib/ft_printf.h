/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:08:19 by pibernar          #+#    #+#             */
/*   Updated: 2024/06/04 16:57:53 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

void	ft_putchar(int c);
void	ft_putstr(char *s);
void	ft_putnbr(int n);
void	ft_putuint(unsigned int n);

int		ft_printdecimal(int n);
int		ft_printchar(char c);
int		ft_printstr(char *s);
int		ft_printptr(long unsigned int p);
int		ft_printunint(unsigned int n);
int		ft_printhexa(unsigned int n, char c);
int		ft_printpercent(void);
int		ft_printf(const char *str, ...);

#endif
