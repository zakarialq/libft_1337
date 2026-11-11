/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 00:21:12 by zalachqa          #+#    #+#             */
/*   Updated: 2026/11/08 00:34:41 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	x;

	if (!s || !f)
		return ;
	x = 0;
	while (s[x])
	{
		f(x, &s[x]);
		x++;
	}
}
// int main()
// {
//     char s[] = "helloz zakaria";
//     ft_striteri(s, to_up);
//     printf("%s",s);
//     return 0;
// }