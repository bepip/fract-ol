/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:58:33 by pibernar          #+#    #+#             */
/*   Updated: 2024/02/26 11:42:49 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l_len;
	size_t	i;
	size_t	j;

	l_len = 0;
	i = 0;
	j = 0;
	l_len = ft_strlen(little);
	if (len == 0 && l_len != 0)
		return (NULL);
	if (l_len == 0)
		return ((char *)big);
	while (big[j] && j < len)
	{
		while (big[j + i] == little[i] && i < l_len && i + j < len)
			i++;
		if (i == l_len)
			return ((char *)&big[j]);
		i = 0;
		j++;
	}
	return (NULL);
}
