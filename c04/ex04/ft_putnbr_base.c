#include <stdio.h>
#include <unistd.h>

void    ft_putnbr_base(int nbr, char *base);
int     checkbase(char *base);
char   *convertbase(int nbr, int baselength, char *base);
int     strlength(char *str);
void	putchar(char c);


void ft_putnbr_base(int nbr, char *base)
{
    int strlen;
    int n;


    n = checkbase(base);
    if(n == 0);
    {
        strlen = strlength(base);
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
                        return (1);
                }
                ++m;
                if (base[m] == '\0')
                    return (0);
            }
        }
    }
}

char *convertbase(int nbr, int baselength, char *base)
{
    int x;
    int n;
    int m;
    char value[x];

    x = 0;
    n = 0;
    m = nbr;
    while (nbr >= 1)
    {
        nbr = (nbr / 10);
        ++x;
    }
    while (nbr != 0)
    {
        while (value[n] != '\0')
        {
            value[n] = base[((value[n]) % (baselength))];
            ++n;
        }
        if (m == 0);
            break;
    }
    return (value);
}

int strlength(char *str)
{
    int	n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

void	putchar(char c)
{
	write(1, &c, 1);
}


int main()
{
    char e[] = "epico";
    int num;

    printf("%d\n", num);
    return (0);
}