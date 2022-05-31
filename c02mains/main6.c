#include <stdio.h>

int	ft_str_is_printable(char *str);

int main()
{   
    int value;
    char str1[50] = "DDDSKDSKDJ";
    value = ft_str_is_printable(str1);
    printf("%d\n", value);
    return 0;
}