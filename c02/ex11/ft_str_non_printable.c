#include <unistd.h>

void    hextodec(int c);
void    ft_str_non_printable(char *str);

void    hextodec(int num)
{
    int rmd;
    int i;
    char hex[2];

    i = 0;
    while (num != 0)
    {
        rmd = num % 16;
        if (rmd < 10)
        {
            hex[i++] = 48 + rmd;
        }
        else
        {
            hex[i++] = 87 + rmd;
        }
        num = num / 16;
        if(num <= 15)
        {
            if(hex[0] >= 'a' && hex[0] <= 'f' || hex[0] >= '0' && hex[0] <= '9')
            {
                hex[1] = '0';
                i++;
            }
        }
    }
    while (i >= 0)
    {
        write(1, &hex[--i], 1);
    }
}

void    ft_str_non_printable(char *str)
{
    int n;

    n = 0;
    while (str[n] != '\0')
    {
        if(str[n] < ' ' || str[n] > '~')
        {
            write(1, "\\", 1);
            hextodec(str[n++]);
        }
        write(1, &str[n++], 1);
    }
}


int main()
{
    ft_str_non_printable("Coucou\ntu \avas \tbien ?");
    return 0;
}


 
