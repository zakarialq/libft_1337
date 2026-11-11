/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 23:25:57 by zalachqa          #+#    #+#             */
/*   Updated: 2026/11/10 23:39:16 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return;
    new->next = *lst;
    *lst = new;
}
// int main()
// {
    // t_list *node1;
    // t_list *node2;
    // t_list *node3;
    // t_list *newww;
    
    // char x[] = "f";
    // char y[] = "y";
    // char z[] = "o";
    // char nw[] = "t";
    
    // node1 = ft_lstnew(x);
    // node2 = ft_lstnew(y);
    // node3 = ft_lstnew(z);
    // newww = ft_lstnew(nw);

    // node1->next = node2;
    // node2->next = node3;
    // node3->next = NULL;
    
//     ft_lstadd_front(&node1, newww);
//     while (node1)
//     {
//         printf("%s\n", (char *)node1->content);
//         node1 = node1->next;
//     }
//     free(node1);
// }