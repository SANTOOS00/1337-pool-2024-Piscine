#include <unistd.h>
void ft_is_negative(int n)
{
    int i = n;
    if (i / 2 == 0)
    {
        write (1, "N", 1);
    }
    else
    {
        write (1, "P", 1);
    }
}
int main()
{
    int i = 6;
    ft_is_negative(i);
    return 0;
}