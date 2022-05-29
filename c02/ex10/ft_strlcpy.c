//The strlcpy() function copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.
//strlcpy() returns the length of src

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int n);

unsigned int ft_strlcpy(char *dest, char *src, unsigned int n)
{
    int i;

    n = (n - 1);
    i = 0;
    if (n < 0)
    {
        return i;
    }
    if (n > 0)
    {
        while (src[i] != '\0' && n != 0)
        {
            dest[i]=src[i];
            n--;
            i++;
        }
    }
    dest[i] = '\0';
    return i;
}

int main()
{
    char str1[10] = "poggers";
    char str2[10];
    int e;
    e = ft_strlcpy(str2, str1, 6);
    ft_strlcpy(str2, str1, 6);
    printf("%s\n", str2);
    printf("%d\n", e);
    
    return 0;
}