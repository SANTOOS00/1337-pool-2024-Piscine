#include <unistd.h>
#include <stdio.h>
void ft_str_char(char *str,int timp)
{
    if(timp && *str >= 'z' && *str <= 'z')
    {
        *str = *str - 32;
    }
    else if (!timp || (*str >= 'A' && *str <= 'Z'))
    {
        *str = *str + 32;
    }
}
char *ft_strcapitalize(char *str)
{
    int i = 0;
    int timp = 1;
    while(str[i] != '\0')
    {
        if((str[i] >= 'A' && str[i] <= 'Z') 
        || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            ft_str_char(&str[i],timp);
            timp = 0;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            timp = 0;
        }
        else 
        {
            timp = 1;
        }
        i++;
    }
    return str;
}
int main(void)
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    ft_strcapitalize(str);
    printf ("%s",str);
    return 0;
}