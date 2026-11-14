/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:27:25 by zalachqa          #+#    #+#             */
/*   Updated: 2026/11/14 17:04:23 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	x;
	int		i;

	x = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == x)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (x == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
// #include<stdio.h>
// int main()
// {
//     char s[]="ggggg";
//     char x = '\0';
//     printf("%s", ft_strchr(s, x));
//     return(0);
// }