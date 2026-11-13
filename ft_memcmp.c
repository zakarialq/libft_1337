/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 23:14:36 by zalachqa          #+#    #+#             */
/*   Updated: 2026/10/22 15:18:55 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

 int ft_memcmp(const void *s1, const void *s2, size_t n)
 {
    unsigned char *a = (unsigned char *)s1;
    unsigned char *b = (unsigned char *)s2;

    size_t i = 0;
    
    while (i < n)
    {
        if (a[i] == b[i])
        {
            i++;
        }
        return (a[i] - b[i]);
    }
    return(a[i] - b[i]);
 }
//  #include<stdio.h>
//  int main()
//  {
//     char a[] = "hallo";
//     char b[] = "hello";
//     printf("%d", ft_memcmp(a, b, 3));
//     return 0;
//  }