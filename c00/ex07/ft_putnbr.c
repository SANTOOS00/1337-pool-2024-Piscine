#include <unistd.h>
void ft_putchar(char c)
{
    write (1, &c ,1);
}
void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write (1,"-2147483648",11);
    }
    else if (nb < 0)
    {
        nb = -nb;
        ft_putchar('-');
        ft_putnbr(nb);
    }
    else if(nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
        ft_putchar(nb + 48);
}
int main()
{
    ft_putnbr(-984594);
    return 0;
}
