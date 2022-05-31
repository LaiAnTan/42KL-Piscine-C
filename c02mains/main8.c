#include <stdio.h>

char	*ft_strlowcase(char *str);

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