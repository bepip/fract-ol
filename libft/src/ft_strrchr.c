/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 09:40:49 by pibernar          #+#    #+#             */
/*   Updated: 2024/02/23 11:08:32 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	charac;

	len = ft_strlen(s);
	charac = c;
	while (len >= 0)
	{
		if (s[len] == charac)
			return ((char *)&s[len]);
		len--;
	}
	return (0);
}
