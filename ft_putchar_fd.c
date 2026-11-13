/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 00:35:34 by zalachqa          #+#    #+#             */
/*   Updated: 2026/11/08 00:38:18 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
// int main()
// {
//     char c = 'a';
//     int fd = 1;
//     ft_putchar_fd(c, fd);
// }