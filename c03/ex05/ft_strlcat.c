#include <unistd.h>
#include <stdio.h>
unsigned int ft_strlcat(char *dest,char *src,unsigned int size)
{
    int i = 0,j = 0;
    while (dest[i] != '\0' && i < size)
    {
        i++;
    }
    while (src[j] != '0' && (i + j) < size)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';

    return i + j;
}
int main(void)
{
    char dest[] = "simo";
    char src[] = "mohamed";
    int size = 7;

    int  resulta = ft_strlcat(dest,src,size);

    printf ("%d\n",resulta);
    printf("%s\n",dest);
    return 0;
}