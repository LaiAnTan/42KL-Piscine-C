#include <stdio.h>

int	ft_str_is_alpha(char *str);

int main()
{   
    int value;
    char str1[5] = "Aaa";
    value = ft_str_is_alpha(str1);
    printf("%d\n", value);
    return 0;
}