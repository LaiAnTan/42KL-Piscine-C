#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int main()
{   
    int value;
    char str1[50] = "dshadjkshjasdjad";
    value = ft_str_is_lowercase(str1);
    printf("%d\n", value);
    return 0;
}