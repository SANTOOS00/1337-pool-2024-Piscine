#include <unistd.h>
#include <stdbool.h>

void ft_putchar(char c)
{
    write(1, &c ,1);
}
void ft_print_comb2(void)
{
    int a = 0;
    int b;
    bool last;
    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            last = !(a == 98 && b == 99);
            ft_putchar(48 + a / 10);
            ft_putchar(48 + a % 10);
            ft_putchar(' ');
            ft_putchar(48 + b / 10);
            ft_putchar(48 + b % 10);
            b++;
            if (last)
            {
                ft_putchar(',');
                ft_putchar(' ');                
            }
        }
        a++;
    }
}
int main()
{
    ft_print_comb2();
    return 0;
}