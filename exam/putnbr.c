#include <unistd.h>
#include <stdio.h>

int ft_len(int nbr)
{
    int len;

    len = 0;
    if (nbr < 0)
        nbr *= -1;
    while (nbr)
    {
        len++;
        nbr /= 10;
    }
    return (len);
}

void ft_putstr(char *arr)
{
    while (*arr)
        write(1, arr++, 1);
}

void ft_putnbr(int nbr)
{
    int     len;
    char    arr[11];
    int     flag;

    // 1337 
    len = ft_len(nbr);
    // len 4
    // ila kan niggaive ola kan positive
    // ila kan 0 positive, 1 nigative
    flag = 0;
    // over flow
    if (nbr == -2147483648)
    {
        write (1, "-2147483648", 11);
        return ; 
    }
    // ila kan had nbr negative
    if (nbr < 0)
    {
        nbr *= -1;
        // hnaya 7tina na9is
        arr[0] = '-';
        // setina lflag 1 ya3ni negative
        flag = 1;
        // zedna len 3la 7asab '-'
        len++;
    }
    // ila kan 0
    else if (nbr == 0)
    {
        write(1, "0", 1);
        return ;
    }

    // hansdo l2ray b '\0'
    arr[len] = 0;

    if (flag == 0)
    {
        // 1337
        // 3 >>> arr[3] = 7
        // 133
        // 2 >>> arr[2] = 3
        // 13
        // 1 >>> arr[1] = 3
        // 1
        // 0 >>> arr[0] = 1
        while (len)
        {
            len--;
            arr[len] = (nbr % 10) + 48;
            nbr /= 10;
        }
    }
    else
    {
        // -1337
        // len = 4 >> arr[4]  = 7;
        // len = 3 >> arr[3]  = 3;
        // len = 2 >> arr[2]  = 3;
        // len = 1 >> arr[1]  = 1;
        /// arr[0] = '-';
        while (--len)
        {
            arr[len] = (nbr % 10) + 48;
            nbr /= 10;
        }
    }

    // hanaya kanjiw nprintiw laray
    ft_putstr(arr);
}


int main()
{
    ft_putnbr(-0);
    return (0);
}