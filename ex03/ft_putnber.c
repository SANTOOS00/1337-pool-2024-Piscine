#include <unistd.h>

void ft_putchar(char *str)
{
    while (*str)
    {
        write (1,str++,1);
    }
}
int ft_arr_len(int nb)
{
    int len;

    len = 0;
    if (nb == 0)
    {
        write(1, "0", 1);
        return 1;
    }
    if (nb < 0)
    {
        nb *= -1;
    }
    while (nb)
    {
        len++;
        nb /= 10;
    }
    return len;
}
void ft_putnber(int nb)
{
    char arr[11];
    int len;
    len = ft_arr_len(nb);
    int malog;

    if (nb < 0)
    {
        nb *= -1;
        arr[0] = '-';
        malog = 1;
        len++;
    }
    arr[len] = '\0';
    while (len-- > malog)
    {
        arr[len] = (nb % 10) + '0';
        nb /= 10;
    }
    ft_putchar(arr);
}