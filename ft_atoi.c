/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 22:00:17 by zalachqa          #+#    #+#             */
/*   Updated: 2026/10/26 22:38:42 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *nptr)
{
    int i;
    int sign;
    int res;

    i = 0;
    while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
        i++;
    
    sign = 1;
    while (nptr[i] == '-' || nptr[i] == '+')
    {
        if (nptr[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }
    res = 0;
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        res = res * 10 + (nptr[i] - '0');
        i++;
    }
    return(res * sign);
}
// #include<stdio.h>
// int main()
// {
//     char s[] = "-";
//     printf("%d", ft_atoi(s));
//     return 0;
// }