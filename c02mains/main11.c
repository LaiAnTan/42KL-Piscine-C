#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int main()
{
    ft_putstr_non_printable("Coucou\ntu \avas \tbien ?");
    return 0;
}