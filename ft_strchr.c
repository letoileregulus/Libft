/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokcek <agokcek@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:26:44 by agokcek           #+#    #+#             */
/*   Updated: 2024/11/01 17:28:45 by agokcek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t i;
	i = 0;
	
	while (i <= ft_strlen(s))
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

// int main() {
//     const char *str = "Merhaba Dünya";
//     char ch = 'a';
//     char *result;

//     result = ft_strchr(str, ch);

//     if (result != NULL) {
//         printf("Karakter bulundu: %c, Konum: %ld\n", *result, result - str);
//     } else {
//         printf("Karakter bulunamadı.\n");
//     }

//     return 0;
// }