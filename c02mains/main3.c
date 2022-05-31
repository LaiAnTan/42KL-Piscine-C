#include <stdio.h>

int	ft_str_is_numeric(char *str);

int main()
{   
    int value;
    char str1[50] = "012319";
    value = ft_str_is_numeric(str1);
    printf("%d\n", value);
    return 0;
}