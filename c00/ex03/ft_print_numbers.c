#include <unistd.h>
void ft_print_numbers(void)
{
    char a = '0';
    /*In C language, the character '0' is considered a 
    character when stored in a variable.*/
    while (a <= '9')
    {
        write(1, &a, 1);
        a++;
    }
}
int main()
{
    ft_print_numbers();
    return 0;
}