/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 17:14:33 by zalachqa          #+#    #+#             */
/*   Updated: 2026/10/23 18:52:14 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char x = (char)c;

    int len;

    len = (ft_strlen(s));
    if (x == '\0')
        return ((char *)&s[len]);
    while (len >= 0)
    {
        if (x == s[len])
        {
            return ((char *)&s[len]);
        }
        len--;
    }

    return NULL; 
}
// #include<stdio.h>
// int main()
// {
//     char s[] = "hello";
//     char x = '\0';
//     printf("%s", ft_strrchr(s, x));
//     return 0;
// }
