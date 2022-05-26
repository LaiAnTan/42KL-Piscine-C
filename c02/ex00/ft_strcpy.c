#include <stdio.h>
#include <string.h>

char    *ft_strcpy(char *dest, char *src);

char    *ft_strcpy(char *dest, char *src)
{
    int n;

    n = 0;
    while (src[n] != '\0')
    {
        dest[n]=src[n];
        n++;
        if (src[n] == '\0')
        {
            dest[n] = '\0';
        }
    }
    
    
    return dest;
}

int main()
{
    char str1[10] = "poggers";
    char str2[10];
    ft_strcpy(str2, str1);
    printf("%s\n", str2);
    return 0;
}