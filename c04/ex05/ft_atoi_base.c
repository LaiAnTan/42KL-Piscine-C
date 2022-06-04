#include <unistd.h>
#include <stdio.h>

void	ft_atoi_base(char *str, char *base);
int 	ft_atoi(char *str);
void    ft_putnbr_base(int nbr, char *base);
int     checkbase(char *base);
void	ft_putchar(char c);

void	ft_atoi_base(char *str, char *base)
{
	ft_putnbr_base(ft_atoi(str), base);
}

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

void    ft_putnbr_base(int nbr, char *base)
{
    int    basesize;
    int    arr[100];
    int    i;

    i = 0;
    basesize = 0;
    if (checkbase(base))
    {
        if (nbr < 0)
        {
            nbr = -nbr;
            ft_putchar('-');
        }
        while (base[basesize])
            basesize++;
        while (nbr)
        {
            arr[i] = nbr % basesize;
            nbr = nbr / basesize;
            i++;
        }
        while (--i >= 0)
            ft_putchar(base[arr[i]]);
    }
}

int checkbase(char *base)
{
    int n;
    int m;

    n = 0;
    m = 0;
    if (base[n] != '\0' || base[n + 1] != '\0') // check size
    {
        while (base[n] != '+' || base[n] != '-') // check sign
        {
            while (base[m] != '\0') // check repeat
            {
                while (base[n] != '\0')
                {
                    ++n;
                    if (base[n] == base[m])
                        return (0);
                }
                ++m;
                if (base[m] == '\0')
                    return (1);
            }
        }
    }
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
    char arr1[30] = "       +-+--+39415739adsa";
	char base[30] = "amongus";
    printf("num = %s\n", arr1);
	printf("base = %s\n", base);
    ft_atoi_base(arr1, base);
    return (0);
}