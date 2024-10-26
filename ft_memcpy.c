/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokcek <agokcek@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 14:12:01 by agokcek           #+#    #+#             */
/*   Updated: 2024/10/25 14:32:21 by agokcek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{	
	size_t i;
	unsigned char *x = (unsigned char *)dst;
	const unsigned char *y = (const unsigned char *)src;
	if (!dst || !src)
		return(NULL);
	i = 0;
	while (n > i)
	{
		x[i] = y[i];
		i++;
	}
	
	return(dst);
}

// int main()
// {
// 	int x[] = {23,43,65,87,54};
// 	int y[] = {45,25,58,45};


// 	char a[] = "MAkpolat";
// 	// char b[] = "BYildiz";
	
// 	ft_memcpy(a + 3,a,5);
// 	ft_memcpy(x,y,16);
	
// 	int i;

// 	i = 0;
// 	while (i < 9)
// 	{
// 		printf("%d\n",x[i]);
// 		printf("%s\n",a);
// 	// 	printf("%d\n",*(int *)(ft_memcpy(x+i,y+i,4)));
// 		i++;
// 	}
// }