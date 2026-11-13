/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 17:18:33 by zalachqa          #+#    #+#             */
/*   Updated: 2026/11/07 16:26:48 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i = 0;
    size_t j;

    if (little[0] == '\0')
        return ((char *)big);
    
    // if (len == 0)

    while (big[i] && i < len)
    {
        j = 0;
        while ((i + j < len) && big[i + j] == little[j])
        {
            if(little[j + 1] == '\0')
                return((char *)&big[i]);
            j++;
        }
        i++;
    }
    return(NULL);
}
// #include<stdio.h>
// int main ()
// {
//     char big [] = "helloworld";
//     char little [] = "";
//     size_t len = 0;
//     printf("%s", ft_strnstr(big, little, len));
//     return (0);
// }