/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokcek <agokcek@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:37:07 by agokcek           #+#    #+#             */
/*   Updated: 2024/11/03 13:51:18 by agokcek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i = 0;
	while (i < n && src[i] !='\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
static	int	word_counter(const char *s, char c)
{
	int	count = 0;
	int	flag = 0;
	
	count = 0;
	flag = 0;
	while (*s)
	{
		if (*s != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if (*s == c)
			flag = 0;
		s++;
	}
	return (count);
}

static	char	*malloc_word(const char *start, int len)
{
	char *word;
	word = (char *)malloc((len + 1)*sizeof(char));
	if (!word)
		return (NULL);
	ft_strncpy(word, start, len);
	word[len] = '\0';
	return (word);
}
char	**ft_split(char const *s, char c)
{
	int		i;
	size_t	word_len;
	char	**result;
	
	result = (char **)malloc((word_counter(s,c) + 1)*sizeof(char *));
	if(!s || !result)
		return (NULL);
	i = 0;
	while(*s)
	{
		if (*s != c)
		{
			const	char	*start;
			int	len;
			start = s;
			len = 0;
			while (*s && *s != c)
			{
				len++;
				s++;
			}
			result[i] = malloc_word(start,len);
			if (!result[i] )
			{
				while (i > 0)
					free(result[--i]);
				free(result);
				return (NULL);
			}
			i++;
		}
		else
			s++;
	}
	result[i] = NULL;
	return result;
}
