#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
    char str1[10] = "poggers";
    char str2[10];
    ft_strncpy(str2, str1, 4);
    printf("%s\n", str2);
    return 0;
}