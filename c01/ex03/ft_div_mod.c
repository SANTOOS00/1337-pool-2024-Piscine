#include <unistd.h>
#include <stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}
int main()
{
    int a = 7;
    int b = 2; 
    int *div = &a;
    int *mod = &b;

    ft_div_mod(a,b,div,mod);
    printf("div = %d|mod = %d",a,b);
    return 0;
}