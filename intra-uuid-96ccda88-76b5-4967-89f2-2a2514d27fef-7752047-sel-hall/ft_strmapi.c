#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "stdlib.h"

int ft_strlen(char str)
{
    int i;

    i = 0;
    while(str[i])
    {
        i++;
    }
    return(i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int	i;
    size_t			len;
    char			*res;

    if (!s || !f)
        return (NULL);
    len = ft_strlen(s);
    res = malloc(sizeof(char) * (len + 1));
    if (!res)
        return (NULL);
    i = 0;
    while (s[i])
    {
        res[i] = f(i, s[i]);
        i++;
    }
    res[len] = '\0';
    return (res);
}