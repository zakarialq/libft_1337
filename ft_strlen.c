/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 16:28:31 by zalachqa          #+#    #+#             */
/*   Updated: 2026/11/07 16:28:32 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
size_t ft_strlen(const char *s)
{
    size_t i;
    i = 0;
    while (s[i])
        i++;
    return(i);
}
// #include<stdio.h>
// int main()
// {
//     char s[]= "hello";
//     printf("%zu\n",ft_strlen(s));
//     return (0);
// }