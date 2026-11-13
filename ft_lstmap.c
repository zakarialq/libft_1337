/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 23:26:42 by zalachqa          #+#    #+#             */
/*   Updated: 2026/11/13 00:06:27 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void *to_upper(void *c)
{
    int i = 0;
    char *x;
    x = (char *)c;
    // x = ft_strdup((char *)c);
    // if(!x)
    //     return NULL;
    while (x[i])
    {
        if (x[i] >= 'a' && x[i] <= 'z')
            x[i] -= 32;
        i++;
    }
    return (x);
}

void del_node(void *contt)
{
    free(contt);
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))

{
    t_list *new;
    t_list *retlist;
    void *content;

    retlist = NULL;
    if (!lst || !f || !del)
        return NULL;
    while(lst)
    {
        content = f(lst->content);
        new = ft_lstnew(content);
        if (!new)
            {
                del(content);
                ft_lstclear(&retlist, del);
                return NULL;
            }
        ft_lstadd_back(&retlist, new);
        lst = lst->next;
    }
    return retlist;
}

int main()
{
    t_list *node1;
    t_list *node2;
    t_list *node3;
    t_list *c;

    char x[] = "a";
    char y[] = "b";
    char z[] = "c";

    node1 = ft_lstnew(x);
    node2 = ft_lstnew(y);
    node3 = ft_lstnew(z);
     
    // node1->next = node2;
    // node2->next = node3;
    // node3->next = NULL;
    ft_lstadd_back(&node1, node2);
    ft_lstadd_back(&node1, node3);

    c = ft_lstmap(node1, to_upper, del_node);
    while(c) 
    {
        printf("%s",(char *)c->content);
        c = c->next;
    } 
}
