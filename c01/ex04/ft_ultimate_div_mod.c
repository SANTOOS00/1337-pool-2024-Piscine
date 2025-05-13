#include <unistd.h>
#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b)
{
    int timp1 = *a;
    int timp2 = *b;
    *a = timp1 / timp2;
    *b = timp1 % timp2;
}
int main(void)
{
    int timp = 90;
    int timp2 = 2;

    int *a = &timp;
    int *b = &timp2;
    ft_ultimate_div_mod(a,b);
    printf ("div = %d | mod = %d",timp,timp2);
    return 0;
}