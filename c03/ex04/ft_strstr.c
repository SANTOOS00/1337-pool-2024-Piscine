#include <unistd.h>
#include <stdio.h>
char *ft_strstr(char *str ,char *to_find)
{
    int i,j;
    while (*to_find == '\0')
    {
        return str;
    }
    i = 0;
    while (str[i] != '\0')
    {
        j = 0;
        while (str[i] != '\0' && str[i + j] == to_find[j])
        {
            j++;
        }
        if (to_find[j] == '\0')
        {
            return &str[i];
        }
        i++;
    }
    return NULL;
}
int main(void)
{
    char *str = "simo santoos mohamed";
    char *to_find = "santoos";

    char *str1 = ft_strstr(str, to_find);

    printf ("%s",str1);

    return 0;
}