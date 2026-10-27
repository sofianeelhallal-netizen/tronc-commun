#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "stdlib.h"

int ft_strlen(char *str)
{
    int a;

    while(str[a] != 0)
    {
        a++;
    }
    return(a);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    size_t start;
    size_t end;
    int found;

    i = 0;
    start = 0;
    if (!s1 || !set)
    {
        return(NULL);
    }
    while (s1[start] != '\0')
    {
        i = 0;
        found = 0;
        while(set[i])
        {
            if(s1[start] == set[i])
            {
                found = 1;
                break;
            }
            i++;
        }
        if(found == 0)
        {
            break;
        }
        start++;
    }
    
    end = ft_strlen(s1);
    while(end > start)
    {
        i = 0;
        found = 0;
        while(set[i])
        {
            if(s1[end - 1] == set[i])
            {
                found = 1;
                break;
            }
            i++;
        }
        if(found == 0)
        {
            break;
        }
        end--;
    }
    res = malloc(sizeof(char) * (end - start + 1));
    if (!res)
    {
        return(NULL);
    }
}
