/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokcek <agokcek@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:19:07 by agokcek           #+#    #+#             */
/*   Updated: 2024/11/01 13:56:08 by agokcek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *ptr1;
    const unsigned char *ptr2;
    size_t i;
    
    ptr1 = s1;
    ptr2 = s2;
    i = 0;
    while (i < n) {
        if (ptr1[i] != ptr2[i])
            return (ptr1[i] - ptr2[i]);
        i++;
    }
    return (0);
}

// int main()
// {
//     int f1;
//     int f2;
//     int f3;

//     f1 = 4328687;
//     f2 = 2334876;
//     f3 = 24934;

//     int result1 = ft_memcmp(&f1, &f2, sizeof(f1)); 
//     int result2 = ft_memcmp(&f3, &f1, sizeof(f1));

//     printf("Result1: %d\n", result1); // 0 döner
//     printf("Result2: %d\n", result2); // Negatif veya pozitif değer döner
//     return (0);
// }