/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokcek <agokcek@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 14:12:01 by agokcek           #+#    #+#             */
/*   Updated: 2024/10/20 16:43:25 by agokcek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{	
	size_t i;
	unsigned char *x = (unsigned char *)dst;
	unsigned char *y = (unsigned char *)src;
	if (!dst && !src)
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
// 	int x[] = {7,5,3,21};
// 	int y[] = {23,44,74,32,89};
	
// 	ft_memcpy(x,y,12);
	
// 	int i;

// 	i = 0;
// 	while (i < 4)
// 	{
// 		printf("%d\n",x[i]);
// 	// 	printf("%d\n",*(int *)(ft_memcpy(x+i,y+i,4)));
// 		i++;
// 	}
// }