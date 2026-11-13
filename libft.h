/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalachqa <zalachqa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 17:30:06 by zalachqa          #+#    #+#             */
/*   Updated: 2026/11/12 23:34:16 by zalachqa         ###   ########.fr       */
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
void ft_lstdelone(t_list *lst, void (*del)(void*));
t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *));
void ft_lstiter(t_list *lst, void (*f)(void *));
void ft_lstclear(t_list **lst, void (*del)(void*));
void ft_lstadd_back(t_list **lst, t_list *new);
unsigned int ft_lstsize(t_list *lst);
void ft_lstadd_front(t_list **lst, t_list *new);

#endif