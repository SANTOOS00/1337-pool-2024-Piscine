#include <unistd.h>
#include <stdio.h>
void    ft_swap(int *a, int *b)
{
    int timp = &a;
    *a = &b;
    *b = timp;
}
int main(void)
{
    int a = 20;
    int b = 0011;
    int *nbr1 = &a;
    int *nbr2= &b;

    printf("nbr1 = %d|| nbr2 = %d",nbr1,nbr2);

    ft_swap(nbr1,nbr2);

    printf("nbr1 = %d|| nbr2 = %d",nbr1,nbr2);
    return 0;

}