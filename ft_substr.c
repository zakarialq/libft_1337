/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 15:44:39 by zalachqa          #+#    #+#             */
/*   Updated: 2026/11/02 14:40:44 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"libft.h"

char *ft_substr(char const *s, unsigned int start,
size_t len)

{
    size_t slen = ft_strlen(s);
    char *subs;
    size_t i;
    size_t sublen;

    if (start >= slen)
        sublen = 0;
    else if (len > slen - start)
        sublen = slen - start;
    else
        sublen = len;
    subs = malloc(sizeof(char) * sublen + 1);
    if (!subs)
        return NULL;
    
    i = 0;
    while (i < sublen)
    {
        subs[i] = s[start];
        i++;
        start++;
    }
    subs[i] = '\0';
    return(subs);
}
#include<stdio.h>
int main()
{
    char s[] = "hello zakaria";
    printf("%s", ft_substr(s, 10, 3));
    return 0;
}