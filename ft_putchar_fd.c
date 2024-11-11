/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokcek <agokcek@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:46:58 by agokcek           #+#    #+#             */
/*   Updated: 2024/11/11 18:23:30 by agokcek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
// #include <fcntl.h>
// int main()
// {
//     int fd = open("aa.txt", O_CREAT | O_RDWR, 777);
//     ft_putchar_fd('c', fd);
// }
