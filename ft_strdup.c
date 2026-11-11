/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 21:59:28 by zalachqa          #+#    #+#             */
/*   Updated: 2026/10/26 23:05:33 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"libft.h"

char *ft_strdup(const char *s)
{
   size_t len = ft_strlen(s);
   char *str;

   str = malloc(sizeof(char) * (len + 1));
   if (!str)
   {
        return (NULL);
   }
   int  i = 0;
   while(s[i])
   {
        str[i] = s[i];
        i++;
   } 
   str[i] = '\0';
   return (str);
}