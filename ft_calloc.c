/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokcek <agokcek@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:08:32 by agokcek           #+#    #+#             */
/*   Updated: 2024/11/02 14:03:51 by agokcek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr != NULL)
		ft_memset(ptr, 0, count * size);
	return (ptr);
}
// int main() 
// {
//     int *arr = (int *)ft_calloc(5, sizeof(int));
//     int i;
//     i = 0;
//     if (arr != NULL) {
//         while (i < 5)
//         {
//             printf("%d ", arr[i]); // Tüm elemanlar 0 olmalı
//             i++;
//         }
//         free(arr); // Belleği serbest bırak
//     }
//     return 0;
// }
