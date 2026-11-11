/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 21:55:10 by zalachqa          #+#    #+#             */
/*   Updated: 2026/10/21 21:55:31 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i = 0;

    unsigned char *s = (unsigned char *)src;
    unsigned char *d = (unsigned char *)dest;

    if (n == 0 || (s == d))
    {
        return (dest);
    }

    if (s > d)
    {
        while (i < n)
        {
           d[i] = s[i];
           i++;
        }
    }
    if (d > s)
    {
        while (n > 0)
        {
            n--;
            d[n] = s[n];
        }
    }
    return (dest);
}
// #include<stdio.h>
// int main()
// {
//     char s[5] = "ABCDE";
//     char *d = s;
//     ft_memmove(d, s, 3);
//     printf("%s", d);
//     return 0;
// }