/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 02:43:22 by zalachqa          #+#    #+#             */
/*   Updated: 2026/10/24 04:10:39 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

 int ft_strncmp(const char *s1, const char *s2, size_t n)
 {
    size_t i = 0;

    if(n == 0)
        return (0);
    while (i < n )
    {
        if(s1[i] == s2[i])
            i++;
        return (s1[i] - s2[i]);
    }
    return (s1[i] - s2[i]);
 }
 int main()
 {
    char s1[] = "ad";
    char s2[] = "vv";
    size_t i = 2;
    printf("%d", ft_strncmp(s1, s2, i));
    return (0);
 }