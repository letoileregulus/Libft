/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokcek <agokcek@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:15:17 by agokcek           #+#    #+#             */
/*   Updated: 2024/10/27 12:08:21 by agokcek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *ptr = s;
    unsigned char ch = (unsigned char)c;
    size_t i;

    i = 0;
    while (i < n) {
        if (ptr[i] == ch) {
            return (void *)(ptr + i);
        }
        i++;
    }
    return NULL;
}

// int main() {
//     const char *str = "Hello, world!";
//     char *result;
//     char *ara = "abcdefghıijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
//     while (*ara != '\0')
//     {
//         result = ft_memchr(str, *ara, 13);
//         if (result != NULL) {
//             printf("%p adresinde %c karakteri bulundu.\n",result, *result);
//         } else {
//             printf("Karakter bulunamadı.\n");
//         }
//         ara++;
//     }
//     return 0;
// }

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int search_value = 3;
    
    unsigned char *result = ft_memchr(arr, search_value, 12);

    if (result != NULL) {
        int *found_value = (int *)(result);
        printf("Sayı bulundu: %d\n", *found_value);
    } 
    else 
    {
        printf("Sayı bulunamadı.\n");
    }

    return 0;
}