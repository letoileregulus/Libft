/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokcek <agokcek@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:28:32 by agokcek           #+#    #+#             */
/*   Updated: 2024/10/26 17:12:40 by agokcek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
     while (n > 0 && *s1 != '\0' && *s2 != '\0') {
        if (*s1 != *s2) {
            return (unsigned char)(*s1) - (unsigned char)(*s2);
        }
        s1++;
        s2++;
        n--;
    }
    if (n == 0) {
        return 0;
    }
    return (unsigned char)(*s1) - (unsigned char)(*s2);
}

// int main() {
//     const char *s1 = "ali burak gitti";
//     const char *s2 = "ali burak geldi";

//     printf("s1 ve s2 karşılaştırması (ilk 5 karakter): %d\n", ft_strncmp(s1, s2, 12)); // 0

//     return 0;
// }