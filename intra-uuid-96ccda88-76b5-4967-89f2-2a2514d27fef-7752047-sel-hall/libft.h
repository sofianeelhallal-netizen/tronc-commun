#ifndef LIBFT.H
#define LIBFT.H

int ft_isalpha(char *str);
int ft_isdigit(char *str);
int ft_isalnum(char *str);
int ft_isascii(char *str);
int ft_isprint(char *str);
int ft_strlen(char *str);
int ft_strlcpy(char *str);
int ft_atoi(char *str);
int ft_strncmp(char *s1, char *s2);
int ft_toupper(char *str);
int ft_tolower(char *str);
void ft_bzero(void *str, size_t n);
void ft_memset(void *str, int value, size_t count);

typedef struct s_list
{
    void *content;
    struct s_list *next;
} 
t_list;
#endif