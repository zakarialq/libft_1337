/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 23:07:43 by zalachqa          #+#    #+#             */
/*   Updated: 2026/11/10 23:24:55 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (!lst)
        return(NULL);
    while (lst->next)
    {
        lst = lst->next;
    }
    return lst;
}

// int main(void)
// {
//     t_list *node1;
//     t_list *node2;
//     t_list *node3;
//     t_list *node4;
    
//     char x[] = "f";
//     char y[] = "y";
//     char z[] = "o";
//     char n[] = "t";
    
//     node1 = ft_lstnew(x);
//     node2 = ft_lstnew(y);
//     node3 = ft_lstnew(z);
//     node4 = ft_lstnew(n);

//     node1->next = node2;
//     node2->next = node3;
//     node3->next = node4;
//     node4->next = NULL;

//     t_list *lstnd = ft_lstlast(node1);

//     printf("%s", (char *)lstnd->content);
// }