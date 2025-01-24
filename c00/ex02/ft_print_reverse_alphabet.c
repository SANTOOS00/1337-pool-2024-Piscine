#include <unistd.h>
void ft_print_reverse_alphabet(void)
{
    char a = 122;
    while (a >= 97)
    {
        write(1, &a, 1);
        a--;
    }
}
int main()
{
    ft_print_reverse_alphabet();
    return 0;
}