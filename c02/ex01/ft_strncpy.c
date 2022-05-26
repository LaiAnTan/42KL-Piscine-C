#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int x;

    x = 0;
    while (n != x)
    {
        dest[x]=src[x];
        x++;
        if (n == x)
        {
            break;
        }
    }
    return dest;
}

int main()
{
    char str1[10] = "poggers";
    char str2[3];
    ft_strncpy(str2, str1, 3);
    printf("%s\n", str2);
    return 0;
}