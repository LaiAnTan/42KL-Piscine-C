#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int n;
    int m;
    int o;
    int p;

    n = -1;
    m = 0;
    o = -1;
    p = -1;
    while (src[++p] != '\0'){}
    while (dest[++o] != '\0'){}
    while (dest[++n] != '\0')
        size--;
    while (size != 0)
    {
        while (src[m] != '\0')
        {
            if (dest[n] == '\0')
            {
                dest[n++] = src[m++];
                size--;
                if (size == 0)
                    break;
            }
        }
        dest[n - 1] = '\0';
    }
    return (o + p);
}

int main()
{
    char str1[5] = "efgh";
    char str2[8] = "abcd";
    char str3[8] = "abcd";
    int num1;
    int num2;



    num1 = ft_strlcat(str2, str1, 6);
    num2 = strlcat(str3, str1, 6);
    printf("My function = %s\n", str2);
    printf("%d\n", num1);
    printf("System function = %s\n", str3);
    printf("%d\n", num2);

    return 0;
}