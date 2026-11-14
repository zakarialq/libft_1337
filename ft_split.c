/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 10:22:13 by zalachqa          #+#    #+#             */
/*   Updated: 2026/11/14 17:02:58 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	*allocate_word(char const *s, char c)
{
	char	*p;
	size_t	len;
	size_t	i;

	len = 0;
	while (s[len] && s[len] != c)
	{
		len++;
	}
	p = malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

static void	free_array(char **arr, size_t nbr_words)
{
	while (nbr_words > 0)
	{
		free(arr[--nbr_words]);
	}
	free(arr);
}

static int	fill_arr(char **res, char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			res[j] = allocate_word(&s[i], c);
			if (!(res[j]))
			{
				free_array(res, j);
				return (0);
			}
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	res[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	res = malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	if (!fill_arr(res, s, c))
		return (NULL);
	return (res);
}
// #include<stdio.h>
// int main(void)
// {
//     char s[]= "he llo zak aria";
//     char sep = ' ';
//     char **p;
//     p = ft_split(s, sep);
//     int i = 0;
//     while(p[i])
//     {
//         printf("%s\n", p[i]);
//         free(p[i]);
//         i++;
//     }
//     free(p);
//     return (0);
// }