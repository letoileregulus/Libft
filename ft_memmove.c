/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokcek <agokcek@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:34:18 by agokcek           #+#    #+#             */
/*   Updated: 2024/11/02 14:02:56 by agokcek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *) dst;
	s = (const unsigned char *) src;
	if (dst == src || len == 0)
		return (dst);
	if (dst < src)
	{
		while (len--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		while (len--)
			*(d + len) = *(s + len);
	}
	return (dst);
}

// int main()
// {
// 	int str1[] = {23,145,67,78,89};
// 	int str2[] = {-1,67,23,12};
// 	ft_memmove(str1,str2,4); // len = 3 olursa 
//ilk 3 byte 1111 1111 1111 dolduruluyor 
// 	int i;
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d\n",str1[i]);
// 		i++;
// 	}
// }
