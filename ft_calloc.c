/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 23:05:36 by zalachqa          #+#    #+#             */
/*   Updated: 2026/11/07 16:24:31 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    
    if (size == 0 || nmemb == 0)
        return NULL;
    size_t totalsize = nmemb * size;
    void*p = malloc(totalsize);
    if (!p)
        return NULL;
    
    ft_bzero(p, totalsize);
    return (p);
}
// int main(void)
// {
//     int *p = ft_calloc(6,2);
//     printf("%ls", p);
//     return 0;
// }