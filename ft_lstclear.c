/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 15:19:44 by zalachqa          #+#    #+#             */
/*   Updated: 2026/11/14 16:04:17 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nxt_node;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		nxt_node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = nxt_node;
	}
}
