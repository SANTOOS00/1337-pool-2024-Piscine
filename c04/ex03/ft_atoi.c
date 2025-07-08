#include <unistd.h>
#include <stdio.h>
int ft_atoi(char *str)
{
	int i = 0;
	int signs = 1;
	int num = 0;
	while (str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
		{
			signs *= -signs;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - 48;
		i++;
	}
	return (num * signs);
}
int main(void)
{
	char str[] = "  ----+----1234dj567";
	printf("%d",ft_atoi(str));

	return 0;
}