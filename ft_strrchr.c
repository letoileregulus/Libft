/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokcek <agokcek@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:30:37 by agokcek           #+#    #+#             */
/*   Updated: 2024/10/26 17:07:44 by agokcek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char		*last_occurrence;
	static char	*empty_string;
	last_occurrence = NULL;
	empty_string = "";
	
	if (c == '\0')
		return empty_string;
	while (*s != '\0') {
		if (*s == (char)c) {
			last_occurrence = (char *)s;
		}
		s++;
	}
	return last_occurrence; 
}

int main() {
    const char *str = "Merhaba Dünya";
    char *result = strrchr(str, '\0');
    if (result) {
        printf("Son '%c' karakteri: %s\n", result[0],result);
    } else {
        printf("'a' karakteri bulunamadı.\n");
    }
    return 0;
}