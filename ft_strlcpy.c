/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 04:12:13 by zalachqa          #+#    #+#             */
/*   Updated: 2026/10/24 04:52:35 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t len = ft_strlen(src);
    size_t i = 0;

    if (size == 0)
        return (len);

    while (src[i] && i < (size - 1))
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return(len);
}
// int main()
// {
//     char s[] = "hello";
//     char d[6];
//     size_t i = sizeof(d);
//     printf("%ld\n", ft_strlcpy(d, s, i));
//     printf("%s\n", d);
//     return 0;
// }