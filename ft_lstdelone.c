/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 00:00:19 by zalachqa          #+#    #+#             */
/*   Updated: 2026/11/13 00:59:17 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
// void delf_node(void *content)
// {
//     free(content);
// }
// int main()
// {
//     t_list *node = ft_lstnew("hh");
//     printf("%s\n", (char *)node->content);
//     ft_lstdelone(node, delf_node);
//     printf("%s", (char *)node);
//     return 0;
// }
