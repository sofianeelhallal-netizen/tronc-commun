/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 12:45:46 by username          #+#    #+#             */
/*   Updated: 2026/10/30 15:57:37 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int	ft_atoi(const char *nptr);

void	ft_bzero(void *str, size_t n);

void	*ft_calloc(size_t n, size_t s);

int	ft_isalnum(char *str);

int	ft_isalpha(char *str);

int	ft_isascii(char *str);

int	ft_isdigit(char *str);

int	ft_isprint(char *str);

char	ft_itoa(int n);
void	ft_lstadd_front(t_list **lst, t_list *new);

void	ft_lstadd_back(t_list **lst, t_list *new);

void	ft_lstclear(t_list **lst, void (*del)(void *));

void	ft_lstdelone(t_list *lst, void (*del)(void *));

void	ft_lstiter(t_list *lst, void (*f)(void *));

t_list	*ft_lstlast(t_list *lst);

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

t_list	ft_lstnew(void *content);

int	ft_lstsize(t_list *lst);

void	*ft_memchr(const void *s, int c, size_t n);

int	ft_memcmp(const void *point1, const void *point2, size_t n);

void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memove(void *dst, const void *src, size_t len);

void	*ft_memset(void *s, int c, size_t n);

void	ft_putchar_fd(char c, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

void	ft_putstr(char *s, int fd);

char	**ft_split(const char *s, char c);

char	*ft_strchr(const char *str, int c);

int	ft_strlen(char *str);

char	*ft_strdup(char *src);

char	*ft_strjoin(int size, char **strs, char *sep);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int	ft_strncmp(char *s1, char *s2, size_t n);

char	*ft_strnstr(char *str, char *to_find, size_t len);

char	*ft_strrchr(const char *str, int c);

void	ft_strteri(char *s, void (*f)(unsigned int, char *));

char	*ft_strtrim(char const *s1, char const *set);

char	*ft_substr(const char *s, unsigned int start, size_t len);

char	*ft_tolower(char *str);

char	*ft_toupper(char *str);

#endif
