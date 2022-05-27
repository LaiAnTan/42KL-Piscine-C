#include <unistd.h>

char *rev_print(char *str);

char *rev_print(char *str)
{
    int x;

    x = 0;
    if (str[x] == '\0')
    {
        write(1, "\n", 1);
        return str;
    }
    while (str[x] != '\0')
    {
        x++;
    }
    if (str[x] == '\0')
    {
        while (x != 0)
        {
            x--;
            write(1,&str[x], 1);
        }
    }
    return str;
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