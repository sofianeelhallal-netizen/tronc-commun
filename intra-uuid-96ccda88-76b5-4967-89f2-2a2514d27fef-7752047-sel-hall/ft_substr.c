#include <unistd.h>
#include <stdio.h>
#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    int i;
    char substr;

    if(!s)
    {
        return(s);
    }
    i = 0;
    while(s[i])
    {
        i++;
    }
    if(star > i)
    {
        return((char *)0)
    }
    if(len > i - start)
    {
        len = i- start
    }
    substr = (char *)malloc(sizeof) * (len + 1);
    if (!substr)
    {
        return(substr);
    }
    i = 0;
    while(i < len)
    {
        susbstr[i] = s[start + i];
        i++;
    }
}