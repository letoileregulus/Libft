/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokcek <agokcek@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:51:13 by agokcek           #+#    #+#             */
/*   Updated: 2024/11/11 16:21:44 by agokcek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// char caesar_cipher(unsigned int i, char c)
// {
//     int shift = 3; // Kaydırma değeri (3 harf ileri)
    
//     if (c >= 'a' && c <= 'z')
//         return ((c - 'a' + shift) % 26 + 'a'); // Küçük harfleri şifrele
//     else if (c >= 'A' && c <= 'Z')
//         return ((c - 'A' + shift) % 26 + 'A'); // Büyük harfleri şifrele
//     return c; // Diğer karakterleri olduğu gibi bırak
// }

// int main()
// {
//     char str[] = "Hello, World!"; // Şifrelenecek metin
//     char *result;
// 	char (*f)(unsigned int, char);

// 	f = caesar_cipher;
//     // ft_strmapi fonksiyonunu kullanarak şifreleme
//     result = ft_strmapi(str, f);
//     if (result != NULL)
//     {
//         printf("Original string: %s\n", str);
//         printf("Encrypted string: %s\n", result);
//         free(result); // Belleği serbest bırak
//     }
//     else
//     {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }

 // -------FT_SPLIT---------
	// const char *deneme01 = "Ali,Emre,Burak,Hasan,Mücahid,Onur,Muhammed";
	// const char *deneme02 = "  Farklı        uzunluklarda ayraç     kullanımı      ";
	// const char *deneme03;

	
	// //Deneme01
	// printf("\nDeneme 01 : %s\n",deneme01);
	// printf("---------------------------------------------------\n");
	// char **sonuc01 = ft_split(deneme01, ',');
	// if (sonuc01 == NULL || sonuc01[0] == NULL)
	// 	printf("Ayrılacak kelime yok");
	// else
	// {
	// 	int i;
	// 	i = 0;
	// 	while (sonuc01[i] != NULL)
	// 	{
	// 		printf("Kelime %d: %s\n",i,sonuc01[i]);
	// 		free(sonuc01[i]);
	// 		i++;
	// 	}
	// 	free(sonuc01);
	// }

	// //Deneme 02
	// printf("\nDeneme 02 : %s\n", deneme02);
	// printf("---------------------------------------------------\n");
	// char    **sonuc02 = ft_split(deneme02, ' ');
	// if (sonuc02 == NULL || sonuc02[0] == NULL)
	// 	printf("Ayrılacak kelime yok");
	// else
	// {
	// 	int i;
	// 	i = 0;
	// 	while (sonuc02[i] != NULL)
	// 	{
	// 		printf("Kelime %d: %s\n",i , sonuc02[i]);
	// 		free(sonuc02[i]);
	// 		i++;
	// 	}
	// 	free(sonuc02);
	// }   

	// //Deneme 03
	// printf("\nDeneme 03 : %s\n", deneme03);
	// printf("---------------------------------------------------\n");
	// char    **sonuc03 = ft_split(deneme03, ' ');
	// if (sonuc03 == NULL || sonuc03[0] == NULL)
	// 	printf("Ayrılacak kelime yok");
	// else
	// {
	// 	int i;
	// 	i = 0;
	// 	while (sonuc03[i] != NULL)
	// 	{
	// 		printf("Kelime %d: %s\n",i , sonuc03[i]);
	// 		free(sonuc03[i]);
	// 		i++;
	// 	}
	// 	free(sonuc03);
	// }   

