#include <stdio.h>

int ft_str_is_alpha(char *str);

int ft_str_is_alpha(char *str)
{
    int x;

    x = 0;
    while (str[x] != '\0')
    {
        if( (str[x] < 'A' || str[x] > 'Z') && (str[x] < 'a' || str[x] > 'z') )
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
    char str1[5] = "Aaa";
    value = ft_str_is_alpha(str1);
    printf("%d\n", value);
    return 0;
}


