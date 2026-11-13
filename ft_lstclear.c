/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 15:19:44 by zalachqa          #+#    #+#             */
/*   Updated: 2026/11/13 00:46:49 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *nxt_node;
        
    if(!lst || !del)
        return;
    while(*lst)
    {
        nxt_node = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = nxt_node;
    }
    // *lst = NULL;
}
// void    ft_lstclear(t_list **lst, void (*del)(void*))
// {
//     t_list    *node;
//     t_list    *next;

//     if (!lst || !del)
//         return ;
//     node = *lst;
//     while (node)
//     {
//         next = node->next;
//         ft_lstdelone(node, del);
//         node = next;
//     }
//     *lst = NULL;
// }
// void del_function(void *content)
// {
//     free(content);
// }
// int main()
// {
//     t_list *node1;
//     t_list *node2;

//     node1 = ft_lstnew(ft_strdup("x"));
//     node2 = ft_lstnew(ft_strdup("y"));


//     node1->next = node2;
//     node2->next = NULL;
//     while(node1)
//     {
//         printf("%s\n", (char *)node1->content);
//         node1 = node1->next;
//     }
//     ft_lstclear(&node1, del_function);
//     printf("Head after clear: %p\n", (void *)node1); 
// }