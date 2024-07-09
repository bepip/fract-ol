/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:13:11 by pibernar          #+#    #+#             */
/*   Updated: 2024/02/23 12:06:54 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < start)
		len = 0;
	else if (s_len < len + start)
		len = s_len - start;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	if (len == 0)
		substr[0] = '\0';
	else
		ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
