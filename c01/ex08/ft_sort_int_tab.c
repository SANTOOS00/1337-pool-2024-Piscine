#include <unistd.h>
#include <stdio.h>
void ft_swap(int *a ,int  *b)
{
    int timp = *a;
    *a = *b;
    *b = timp;
}
void ft_sort_int_tab(int *tab, int size)
{
    int i = 0;
    while (size > i)
    {
        int j = i + 1;
        while (size > j)
        {
            if (tab[i] > tab[j])
            {
                ft_swap(&tab[i],&tab[j]);
            }
            j++;
        }
        i++;
    }
}
int main(void)
{
    int tab[] = {3,2,1};
    int size = 3;

    ft_sort_int_tab(tab,size);

    int i = 0;
    while (size > i)
    {
        printf ("%d , ",tab[i]);
        i++;
    }
    return 0;
}