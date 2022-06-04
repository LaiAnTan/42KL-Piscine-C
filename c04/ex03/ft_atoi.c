#include <stdio.h>

int		ft_atoi(char *str)
{
	int n;
    int sign;
    int rtval;

	n = 0;
	sign = -1;
	rtval = 0;
    while ( str[n] == ' ' || (str[n] >= 9 && str[n] <= 13))
		++n;
    while ( str[n] == '+' || str[n] == '-')
    {
        if(str[n] == '-')
            sign *= -1;
		++n;
    }
    while (str[n] >= '0' && str[n] <= '9')
    {
        rtval = (rtval * 10) + (str[n] - '0');
        ++n;
    }
    return (rtval * sign);
}

int main()
{
    char arr1[30] = "       +-+--+23adsa";
    int a;
    
    a = ft_atoi(arr1);
    printf("%d\n", a);
    return (0);
}