#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "stdlib.h"

void ft_striteri(char *s, void (*f)(unsigned int,
char*))
{
    int i;

    if(!s || !f)
    {
        return;
    }
    i = 0;
    while(s[i])
    {
        f(i, &s[i]);
        i++;
    }
}