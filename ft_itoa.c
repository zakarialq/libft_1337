/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 23:02:11 by zalachqa          #+#    #+#             */
/*   Updated: 2026/11/07 23:57:06 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_nbrs(int n)
{
	long	nbr;
	int		count;

	nbr = n;
	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr *= -1;
	}
	if (nbr == 0)
		count = 1;
	while (nbr > 0)
	{
		count++;
		nbr /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*p;
	long	nbr;
	int		count;

	nbr = n;
	count = count_nbrs(nbr);
	p = malloc(sizeof(char) * (count + 1));
	if (!p)
		return (NULL);
	p[count] = '\0';
	if (nbr < 0)
	{
		p[0] = '-';
		nbr *= -1;
	}
	if (nbr == 0)
		p[0] = '0';
	while (nbr > 0)
	{
		p[--count] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (p);
}
// int main()
// {
//     int b = -2147483648;
//     char *p = ft_itoa(b);
//     printf("%s", p);
//     free(p);
// }
