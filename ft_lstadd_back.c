/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 23:26:52 by zalachqa          #+#    #+#             */
/*   Updated: 2026/11/13 01:01:11 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *node;
    if(!*lst || !new)
        return;
    if(!*lst)
    {
        *lst = new;
        return;
    }
    node = ft_lstlast(*lst);
    node->next = new;
}
// int main(void)
// {
//     t_list *node1;
//     t_list *node2;
//     // t_list *node3;
//     // t_list *newww;
    
//     // char x[] = "f";
//     char y[] = "y";
//     // char z[] = "o";
//     // char n[] = "t";
    
//     node1 = NULL;
//     node2 = ft_lstnew(y);
//     // node3 = ft_lstnew(z);
//     // newww = ft_lstnew(n);

//     ft_lstadd_back(&node1, node2);
//     // ft_lstadd_back(&node1, node3);
//     // ft_lstadd_back(&node1, newww);

//     while(node1)
//     {
//         printf("%s\n", (char *)node1->content);
//         node1 = node1->next;
        
//     }
    
    
    
    
// }