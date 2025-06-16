#include <unistd.h>
#include <stdio.h>
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
int main(void)
{
    char *str = "siimo santoos";

    int sstr = ft_strlen(str);

    printf("%d",sstr);
    return 0;
}