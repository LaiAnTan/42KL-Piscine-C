#include <unistd.h>

void    ft_str_non_printable(char *str);
void    ft_putchar(char c);



void    ft_str_non_printable(char *str)
{
    int n;
    char *base16;

    base16 = "0123456789abcdef";

    n = 0;
    while (str[n] != '\0')
    {
        if(str[n] < ' ' || str[n] > '~')
        {
            ft_putchar('\\');
            ft_putchar(base16[(str[n]) / 16]);
            ft_putchar(base16[(str[n]) % 16]);
            ++n;
        }
        ft_putchar(str[n++]);
    }
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}


int main()
{
    ft_str_non_printable("Coucou\ntu \avas \tbien ?");
    return 0;
}


 