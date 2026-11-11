/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 23:26:52 by zalachqa          #+#    #+#             */
/*   Updated: 2026/11/10 23:59:52 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *node = ft_lstlast(*lst);
    node->content = new;
}
// int main(void)
// {
//     t_list *node1;
//     t_list *node2;
//     t_list *node3;
//     t_list *newww;
    
//     char x[] = "f";
//     char y[] = "y";
//     char z[] = "o";
//     char n[] = "t";
    
//     node1 = ft_lstnew(x);
//     node2 = ft_lstnew(y);
//     node3 = ft_lstnew(z);
//     newww = ft_lstnew(n);

//     node1->next = node2;
//     node2->next = node3;
//     node3->next = NULL;
    
    
    
// }