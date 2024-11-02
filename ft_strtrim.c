/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokcek <agokcek@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:32:16 by agokcek           #+#    #+#             */
/*   Updated: 2024/11/02 13:40:25 by agokcek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
		i++;
	while (j > i && ft_strchr(set, s1[j]) != NULL)
		j--;
	return (ft_substr(s1, i, j - i + 1));
}

// #include "libft.h"
// #include <stdio.h>

// int	main(void)
// {
// 	char *x ="DunyaMerhabaDunya";
// 	char *y ="Dunya";
// 	char *a = ft_strtrim(x,y);
// 	printf("%s", a);
// }