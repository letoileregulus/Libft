/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokcek <agokcek@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:26:25 by agokcek           #+#    #+#             */
/*   Updated: 2024/11/13 14:57:54 by agokcek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
