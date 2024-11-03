/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokcek <agokcek@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:37:07 by agokcek           #+#    #+#             */
/*   Updated: 2024/11/03 14:09:59 by agokcek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

void *free_all(char **result)
{
    int i;
    
    i = 0;
    while (result[i])
    {
        free(result[i]);
        i++;
    }
    free(result);
    return (NULL);
    
}
static	char	*malloc_word(const char *word, int start ,int len)
{
	char *word;
	word = (char *)malloc((len + 1)*sizeof(char));
	if (!word)
		return (NULL);
	ft_substr(word, start, len);
	word[len] = '\0';
	return (word);
}
char	**ft_split(char const *s, char c)
{
	int		i;
	char	**result;
	size_t start;
	"  selamlar   merhaba  " " "
	result = (char **)malloc((word_counter(s,c) + 1)*sizeof(char *));
	if(!s || !result)
		return (NULL);
	i = 0;
	while(*s)
	{
		if (*s != c)
		{
			start = i;

			while (*s && *s != c)
				i++;
			result[i] = malloc_word(s,start,i-start);
			if (!result[i++])
                free_all(result);
		}
		else
			s++;
	}
	result[i] = NULL;
	return result;
}
