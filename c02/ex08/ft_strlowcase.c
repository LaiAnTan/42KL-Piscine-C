#include <stdio.h>

char    *ft_strlowcase(char *str);

char    *ft_strlowcase(char *str)
{
    int n;

    n = 0;
    while (str[n] != '\0')
    {
        while(str[n] >= 'A' && str[n] <= 'Z')
        {
            str[n] = (str[n] + 32);
        }
        n++;
    }
    return str;
}

int main()
{
    char *e;
    char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    e = ft_strlowcase(a);
    printf("%s \n", e);
    char b[] = "AwhJADWhLAJWHDjawdlahDWJ";
    ft_strlowcase(b);
    printf("%s \n", b);
    char c[] = "DSKADKA377$$@ADWDA)9827";
    ft_strlowcase(c);
    printf("%s \n", c);
    char d[] = "SEX";
    ft_strlowcase(d);
    printf("%s", d);
}