#include <stdio.h>

char	*ft_strupcase(char *str);

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