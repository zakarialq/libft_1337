/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 04:52:51 by zalachqa          #+#    #+#             */
/*   Updated: 2026/10/26 17:18:11 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t lnd = 0;
    size_t lns = 0;
    size_t i = 0;
    size_t j = 0;

    while (lnd < size && dst[lnd])
        lnd++;
    
    while (src[lns])
        lns++;

    if (size == lnd)
        return (size + lns);
    
    i = lnd;
    while (src[j] && i < (size -1))
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (lnd + lns);
}
// int main()
// {
//     char dst[10] = {'A', 'B', 'C', 'D', 'E', 'F', '\0'};
//     char src[] = "WXYZ";
//     size_t size = 4;
//     printf("%ld\n", ft_strlcat(dst, src, size));
//     printf("%s", dst);
//     return 0;
// }