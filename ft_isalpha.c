/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 16:28:56 by zalachqa          #+#    #+#             */
/*   Updated: 2026/11/11 15:18:52 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
 {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return (1);
    }
    return (0);
}
/*#include<stdio.h>
int main()
{
    char c = 'a';
    char a = 'D';
    char b = ' ';
    char d= '@';
    char e= '!';
    printf("%d\n", ft_isalpha(c));
    printf("%d\n", ft_isalpha(a));
    printf("%d\n",ft_isalpha(b));
    printf("%d\n", ft_isalpha(d));
    printf("%d\n",ft_isalpha(e));
    return 0;
}*/