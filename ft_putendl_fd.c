/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokcek <agokcek@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:49:34 by agokcek           #+#    #+#             */
/*   Updated: 2024/11/11 18:25:16 by agokcek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
	write (fd, "\n", 1);
}
// #include <fcntl.h>

// int main()
// {
// 	int fd = open("Burak.txt", O_CREAT | O_RDWR, 777);
// 	ft_putendl_fd("Burak YILDIZ", fd);
// }