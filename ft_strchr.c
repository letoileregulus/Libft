/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokcek <agokcek@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:26:44 by agokcek           #+#    #+#             */
/*   Updated: 2024/10/26 12:47:06 by agokcek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "stdio.h"

char *ft_strchr(const char *s, int c)
{
    char x = (char)c;
    
    while (*s != '\0')
    {
        if (*s == x)
        {
            return (char *)s;
        }
        s++;
    }
    return NULL;
}

int main() {
    const char *str = "Merhaba Dünya";
    char ch = 'a';
    char *result;

    result = ft_strchr(str, ch);

    if (result != NULL) {
        printf("Karakter bulundu: %c, Konum: %ld\n", *result, result - str);
    } else {
        printf("Karakter bulunamadı.\n");
    }

    return 0;
}