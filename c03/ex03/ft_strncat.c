#include <unistd.h>
#include <stdio.h>
char *ft_strcat(char *dest, char *src,unsigned int nb)
{
    int i = 0;
    int j = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0'&& nb > j)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}
int main(void)
{
    char dest[100] = "simo";
    char src[100] = "santoos";
    int nb = 3; 

    ft_strcat(dest,src,nb);

    printf("%s",dest);
}