/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 21:55:42 by zalachqa          #+#    #+#             */
/*   Updated: 2026/10/21 21:55:47 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;

    i = 0;
    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char *)src;

    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}
// #include<stdio.h>
// int main(void)
// {
//     char s[] = "hello";
//     char d[6];
//     ft_memcpy(d, s, 4);
//     printf("%s", d);
//     return 0;
// }