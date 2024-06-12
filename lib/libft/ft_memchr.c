/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:30:30 by pibernar          #+#    #+#             */
/*   Updated: 2024/02/22 14:52:56 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		charac;

	str = (const unsigned char *) s;
	charac = (unsigned char)c;
	while (n-- > 0)
	{
		if (*str == charac)
			return ((void *)str);
		str++;
	}
	return (NULL);
}
