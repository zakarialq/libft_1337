/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 21:53:19 by zalachqa          #+#    #+#             */
/*   Updated: 2026/10/21 21:55:03 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
void ft_bzero(void *s, size_t n)
{
      unsigned char *t;
      t = (unsigned char *)s;
      size_t i;
      i = 0;

      while (i < n)
      {
        t[i] = '0';
        i++;
      }
}
// #include<stdio.h>
// int main(void)
// {
//     char s[] = "hello";
//     ft_bzero(s, 3);
//     printf("%s", s);
//     return (0);
// }