/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 17:30:06 by zalachqa          #+#    #+#             */
/*   Updated: 2026/11/11 00:43:10 by zalachqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;

size_t  ft_strlen(const char *s);
void    *ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
void    ft_putchar_fd(char c, int fd);
t_list  *ft_lstnew(void *content);
t_list  *ft_lstlast(t_list *lst);
char    *ft_strdup(const char *s);

#endif