#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
    int i;

    i = 0;
    int mouse = 1;
    int res = 0;
    while ((str[i] >= 9 && str[i] <= 13 )|| str[i] == 32)
    {
        i++;
    }
    if(str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            mouse = mouse  * -1;
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (res * mouse);
}

#include <stdio.h>

int main()
{
    char str[] = "   -99438abc";
    int re = ft_atoi(str);

    printf ("%d\n", re);
    printf ("%d\n", atoi(str));
    return 0;

}