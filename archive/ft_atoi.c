#include <stdio.h>

int ft_atoi(char *str);
int checkspace(char *str);
int checksign(char *str, int m);
int convert(char *str, int sign, int o);

int ft_atoi(char *str)
{
    int n;
    int sign;
    int rtval;

    n = checkspace(str);
    sign = checksign(str, n);
    while (str[n] < '0' || str[n] > '9')
        ++n;
    if (str[n] >= '0' && str[n] <= '9')
    {
        rtval = convert(str, sign, n);
    }
    return (rtval);
}

int checkspace(char *str)
{
    int n;

    n = 0;
    while ( str[++n] == ' ' || (str[++n] >= 9 && str[++n] <= 13)){}
    return (n);
}

int checksign(char *str, int m)
{
    int sign;

    sign = -1;
    while ( str[m] == '+' || str[m] == '-')
    {
        if(str[m] == '-')
            sign *= (-1);
        ++m;
    }
    return (sign);
}

int convert(char *str, int sign, int o)
{
    int num;

    num = 0;
    while (str[o] >= '0' && str[o] <= '9')
    {
        num *= 10;
        num += (str[o] - '0');
        ++o;
    }
    if (sign < 0)
        num = (-num);
    return (num);
}

int main()
{
    char arr1[30] = "       +-+--+23832adsa";
    int a;
    
    a = ft_atoi(arr1);
    printf("%d\n", a);
    return (0);
}