#include <unistd.h>

char *rev_print(char *str);

char *rev_print(char *str)
{
    int n;

    n = 0;
    while (str[n] != '\0')
        ++n;
    if (str[n] == '\0')
    {
        --n;
        while (n >= 0)
        {
            write(1, &str[n], 1);
            --n;
        }
    }
    return (str);
}

int main ()
{
    rev_print("rainbow dash");
    write(1, "\n", 1);
    rev_print("Ponies are awesome");
    write(1, "\n", 1);
    rev_print("");
    write(1, "\n", 1);
    return 0;
}