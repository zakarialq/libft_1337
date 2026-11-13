/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 22:01:45 by zalachqa          #+#    #+#             */
/*   Updated: 2026/10/21 23:10:03 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *src = (unsigned char *)s;
    unsigned char x = (unsigned char)c;

    size_t i = 0;
    
    while (i < n)
    {
        if (src[i] == x)
        {
            return (&s[i]);
        }
        i++;
    }
    return NULL;
}
// #include<stdio.h>
// int main()
// {
//     char s[] = "hello";
//     char x = 'e';
//     char *p = ft_memchr(s, x, 2);
//     printf("%s", p);
//     return 0;
// }