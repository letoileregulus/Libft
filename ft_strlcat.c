/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokcek <agokcek@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:48:41 by agokcek           #+#    #+#             */
/*   Updated: 2024/10/26 12:26:18 by agokcek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i = 0;
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	while (i < srclen && dstsize > (dstlen + i + 1))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	if (dstlen + i < dstsize)
		dst[dstlen + i] = '\0';
	return (srclen + dstlen);
}

int main() {
    char dest[5] = "Hello";
    char src[] = "World!";
    size_t size = 4;

    printf("dstlen1: %zu\n",strlen(dest)); // Destin src eklenmeden önceki uzunluğu
    size_t result = ft_strlcat(dest, src, size);
    printf("dstsize: %zu\n",size);
    printf("dstlen2: %zu\n",strlen(dest));  // Destin src eklendikten sonraki hali
    printf("srclen: %zu\n",strlen(src));
    printf("Result: %zu\n", result); // Sonuç < dest + src ise ekleme yapılmamış 
    printf("Combined string: %s\n", dest);

    return 0;
}