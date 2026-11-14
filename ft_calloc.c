/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 23:05:36 by zalachqa          #+#    #+#             */
/*   Updated: 2026/11/14 16:01:59 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	totalsize;

	totalsize = nmemb * size;
	if (size == 0 || nmemb == 0)
		totalsize = 1;
	else if (totalsize / nmemb != size)
		return (NULL);
	p = malloc(totalsize);
	if (!p)
		return (NULL);
	ft_bzero(p, totalsize);
	return (p);
}
