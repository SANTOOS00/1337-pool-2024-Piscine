#include <unistd.h>
#include <stdio.h>
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;//هي ترجع (تعيد) قيمة المتغيّر i من الدالة ft_strlen إلى المكان اللي استدعيت فيه الدالة
}
int main(void)
{
    char *str = "santooooos";
    int i = ft_strlen(str);// i نحفظ الناتج هنا 
    printf ("number = %d",i);
    return 0;
}