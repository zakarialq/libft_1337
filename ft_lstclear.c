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
}
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
