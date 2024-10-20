/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokcek <agokcek@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:00:52 by agokcek           #+#    #+#             */
/*   Updated: 2024/10/20 14:00:49 by agokcek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*x;

	x = (unsigned char *)b;
	while (len > 0)
		x[--len] = (unsigned char)c;
	return (b);
}

// int main()
// {
// 	int m[] = {3,7,5,8,13};
// 	ft_memset(m,2,2);
// 	ft_memset(m,188,1);
// 	ft_memset(m+1,255,4);
// 	ft_memset(m+1,246,1);
// 	printf("%d \n",m[0]);
// 	printf("%d \n",m[1]);
// 	printf("%d \n",m[2]);
// 	printf("%d \n",m[3]);
// 	printf("%d \n",m[4]);
// }