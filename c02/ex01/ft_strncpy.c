#include <unistd.h>
#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i = 0;
    while (src[i] !='\0' && n > i)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return 0;
}
int main(void)
{
    char dest[100];
    char src[] = "santoos";
    int n = 3;
    ft_strncpy(dest,src,n);

    printf ("%s",dest);
    return 0;
}