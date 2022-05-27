#include <stdio.h>

int ft_str_is_printable(char *str);

int ft_str_is_printable(char *str)
{
    int x;

    x = 0;
    while (str[x] != '\0')
    {
        if(str[x] < ' ' || str[x] > '~')
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
    char str1[50] = "DDDSKDSKDJ";
    value = ft_str_is_printable(str1);
    printf("%d\n", value);
    return 0;
}