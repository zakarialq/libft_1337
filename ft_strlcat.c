/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 04:52:51 by zalachqa          #+#    #+#             */
/*   Updated: 2026/11/14 17:04:54 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lnd;
	size_t	lns;
	size_t	i;
	size_t	j;

	lnd = 0;
	lns = 0;
	i = 0;
	j = 0;
	while (lnd < size && dst[lnd])
		lnd++;
	while (src[lns])
		lns++;
	if (size == lnd)
		return (size + lns);
	i = lnd;
	while (src[j] && i < (size - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (lnd + lns);
}
// int main()
// {
//     char dst[10] = {'A', 'B', 'C', 'D', 'E', 'F', '\0'};
//     char src[] = "WXYZ";
//     size_t size = 4;
//     printf("%ld\n", ft_strlcat(dst, src, size));
//     printf("%s", dst);
//     return (0);
// }