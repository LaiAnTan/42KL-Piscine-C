#include <stdio.h>

void	*ft_strcpy(char *dest, char *src);

int main()
{
    char str1[10] = "poggers";
    char str2[10];
    ft_strcpy(str2, str1);
    printf("%s\n", str2);
    return 0;
}
