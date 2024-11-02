/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokcek <agokcek@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 14:12:01 by agokcek           #+#    #+#             */
/*   Updated: 2024/11/02 16:47:01 by agokcek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*x;
	const unsigned char	*y;

	x = (unsigned char *)dst;
	y = (const unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	i = 0;
	while (n > i)
	{
		x[i] = y[i];
		i++;
	}
	return (dst);
}

// int main()
// {
// 	int x[] = {23,43,65,87,54};
// 	int y[] = {45,25,58,45};
// 	char a[] = "MAkpolat";
// 	char b[] = "AYildiz";
// 	ft_memcpy(a + 3,b,5);
// 	ft_memcpy(x,y,16);
// 	int i;
// 	int j;
// 	i = 0;
// 	while (i < 9)
// 	{
// 		printf("%d\n",x[i]);
// 	// 	printf("%d\n",*(int *)(ft_memcpy(x+i,y+i,4)));
// 		i++;
// 	}
// 	j = 0;
// 	while (j < 9)
// 	{
// 		printf("%s\n",a);
// 		j++;
// 	}
// }