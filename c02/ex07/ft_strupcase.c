#include <stdio.h>

char    *ft_strupcase(char *str);

char    *ft_strupcase(char *str)
{
    int n;

    n = 0;
    while (str[n] != '\0')
    {
        while(str[n] >= 'a' && str[n] <= 'z')
        {
            str[n] = (str[n] - 32);
        }
        n++;
    }
    return str;
}

int main()
{
    char *e;
    char a[] = "abcdefghijklmnopqrstuvwxyz";
    e = ft_strupcase(a);
    printf("%s \n", e);
    char b[] = "AwhJADWhLAJWHDjawdlahDWJ";
    ft_strupcase(b);
    printf("%s \n", b);
    char c[] = "awdian*8)%$$69awndabwbdao";
    ft_strupcase(c);
    printf("%s \n", c);
    char d[] = "sex";
    ft_strupcase(d);
    printf("%s", d);
}