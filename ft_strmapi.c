/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 16:26:08 by zalachqa          #+#    #+#             */
/*   Updated: 2026/11/08 00:29:00 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			lens;
	unsigned int	x;
	char			*p;

	if (!s || !f)
		return (NULL);
	lens = ft_strlen(s);
	p = malloc(sizeof(char) * (lens + 1));
	if (!p)
		return (NULL);
	x = 0;
	while (s[x])
	{
		p[x] = f(x, s[x]);
		x++;
	}
	p[x] = '\0';
	return (p);
}
// int main(void)
// {
//     char s[] = "hello zakaria";
//     printf("%s", ft_strmapi(s, to_up));
//     return 0;
// }