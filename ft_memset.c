/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 21:55:53 by zalachqa          #+#    #+#             */
/*   Updated: 2026/10/21 21:56:00 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    unsigned char *t = (unsigned char *)s;

    i = 0;
    while (i < n)
    {
        t[i] = c;
        i++;
    }
    return (s);
}
// #include<stdio.h>
// int main()
// {
//     char s[] = "hello";
//     ft_memset(s, 65, 4);
//     printf("%s", s);
//     return(0);
// }