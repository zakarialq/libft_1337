/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 16:29:06 by zalachqa          #+#    #+#             */
/*   Updated: 2026/11/07 16:29:07 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c)
{
    if(c >= '0' && c <= '9')
    {
        return(1);
    }
    return(0);
}
/*#include<stdio.h>
int main()
{
    int a = 1;
    int b = 22;
    char c = '1';
    char d = ' ';
    printf("%d\n", ft_isdigit(a));
    printf("%d\n", ft_isdigit(b));
    printf("%d\n", ft_isdigit(c));
    printf("%d\n", ft_isdigit(d));
    return 0;
}*/