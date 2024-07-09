/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:01:24 by pibernar          #+#    #+#             */
/*   Updated: 2024/02/26 11:22:19 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*ptr_src;
	char		*ptr_dest;

	if (!dest && !src)
		return (NULL);
	ptr_src = src;
	ptr_dest = dest;
	while (n-- > 0)
		*ptr_dest++ = *ptr_src++;
	return (dest);
}
