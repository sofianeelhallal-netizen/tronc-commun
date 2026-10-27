#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include <stdio.h>

static size_t count_words(char const *s, char c)
{
    int count;
    int in_words;

    count = 0;
    in_words = 0;
    while(*s)
    {
        if(*s != c && in_words == 0)
        {
            count++;
            in_words = 1;
        }
        else if(*s == c)
        {
            in_words = 0;
        }
        s++;
    }
    return(count);
}

int word_cut(char *str, int i)
{
    int c;

    c = 0;
    while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
    {
        i++;
        c++;
    }
    return(c);
}

char **ft_split(const char *s, char c)
{
    int i;
    int j;
    int k;
    char **tab;

    tab = (char **(malloc)count_words(str) + 1) * sizeof(char *));
    if(!tab)
    {
        return(NULL)
    }
    i = 0;
    j = 0;
    while(str[i])
    {
        k = 0;
        while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        if(str[i])
        {
            tab[j] = (char *)malloc(world_len(str, i) + 1) * sizeof(char))
            if(!tab[j])
            {
                return(NULL);
            }
            while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            {
                tab[j][k] = str[i];
                i++;
                k++;
            }
            tab[j][k] = '\0'
            j++;
        }
    }
    tab[j] = NULL;
    return(tab);
}


    


