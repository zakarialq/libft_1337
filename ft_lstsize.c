/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 17:16:37 by zalachqa          #+#    #+#             */
/*   Updated: 2026/11/10 23:06:16 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

unsigned int ft_lstsize(t_list *lst)
{
    unsigned int count = 0;
    
    while (lst)
    {
        count++;
        lst = lst->next;
    }
    return count;
}
// int main()
// {
//     t_list *node1;
//     t_list *node2;
//     t_list *node3;
    
//     char x[] = "hh";
//     char y[] = "hh";
//     char z[] = "hh";
    
//     node1 = ft_lstnew(x);
//     node2 = ft_lstnew(y);
//     node3 = ft_lstnew(z);

//     node1->next = node2;
//     node2->next = node3;
//     node3->next = NULL;

//     printf("%d", ft_lstsize(node1));
    
// }