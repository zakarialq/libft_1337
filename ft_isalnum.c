/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 16:28:48 by zalachqa          #+#    #+#             */
/*   Updated: 2026/11/07 16:28:49 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int c)
{
    if(((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) || (c >= '0' && c <= '9'))
    {
        return (1);
    }
    return (0);
}
// #include<stdio.h>
// int main()
// {
//     char a = 'a';
//     char b = 'A';
//     char c = '3';
//     char d = ',';
//     char e = ' ';
//     printf("%d\n", ft_isalnum(a));
//     printf("%d\n", ft_isalnum(b));
//     printf("%d\n", ft_isalnum(c));
//     printf("%d\n", ft_isalnum(d));
//     printf("%d\n", ft_isalnum(e));
//     return(0);
// }