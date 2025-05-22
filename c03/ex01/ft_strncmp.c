#include <unistd.h>
#include <stdio.h>
int ft_strncmp(char *s1, char *s2,unsigned int n)
{
    int i = 0;
    while (n > n && s1[i] != '\0' || s2[i] != '\0')
    {
        if (!(s1[i] - s2[i] == 0))
        {
            return s1[i] - s2[i];
        }
        i++;
    }
    return 0;
}
int main(void)
{
    char *s1 = "simoasantoos";
    char *s2 = "si3oasantoos";
    int n = 3;
    printf ("%d",ft_strncmp(s1,s2,n));

    return 0;
}