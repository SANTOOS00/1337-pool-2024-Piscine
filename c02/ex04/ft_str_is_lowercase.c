#include <unistd.h>
#include <stdio.h>
int ft_str_is_lowercase(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(!(str[i] >= 'a' &&str[i] <= 'z'))
        {
            return 0;
        }
        i++;
    }
    return 1;

}
int main(void)
{
    char str[] = "santoos";

    printf("%d",ft_str_is_lowercase(str));

    return 0;
}