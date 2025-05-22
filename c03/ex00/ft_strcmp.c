#include <unistd.h>
#include <stdio.h>
int ft_strcmp(char *s1, char *s2)
{
    while (*s1 != '\0' || *s2 != '\0')
    {
        if(!((*s1 - *s2) == 0))
        {
            return *s1 - *s2;
        }
        *s1++;
        *s2++;
    }
    return 0;
}
int main(void)
{
    char s1[] = "sibo";
    char s2[] = "siao";

    printf("%d",ft_strcmp(s1,s2));

    return 0;
}