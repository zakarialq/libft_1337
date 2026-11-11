/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 10:16:10 by zalachqa          #+#    #+#             */
/*   Updated: 2026/11/09 23:38:36 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *node;
    
    node = malloc(sizeof(t_list));
    if (!node)
        return (NULL);
    node->content = content;
    node->next = NULL;
    return(node);
}
// int main(void)
// {
//     t_list *node1;
//     char *s = NULL;
//     node1 = ft_lstnew(s);
//     printf("%s", (char *)node1->content);
//     return 0;
// }