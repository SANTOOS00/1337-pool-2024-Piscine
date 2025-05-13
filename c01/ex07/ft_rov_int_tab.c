#include <unistd.h>
#include <stdio.h>
void ft_rev_int_tab(int *tab, int size)
{
    int i = 0;
    while (size / 2 > i)
    {
        int timp = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = timp;
        i++;
    }
}
int main(void)
{
    int tab[] = {1,2,3,4,5};
    
    ft_rev_int_tab(tab,5);

    int i = 0;
    while (i < 5)
    {
        printf ("number %d = %d",i + 1, tab[i]);
        i++;
    }
    return 0;
}