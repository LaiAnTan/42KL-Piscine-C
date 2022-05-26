#include <stdio.h>

int ft_str_is_numeric(char *str);

int ft_str_is_numeric(char *str)
{
    int x;

    x = 0;
    while (str[x] != '\0')
    {
        if(str[x] < '0' || str[x] > '9')
        {
            return 0;
        }
        x++;
    }
    return 1;
}

int main()
{   
    int value;
    char str1[50] = "012319";
    value = ft_str_is_numeric(str1);
    printf("%d\n", value);
    return 0;
}