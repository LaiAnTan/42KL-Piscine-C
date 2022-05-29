#include <stdio.h>

char *ft_strcaptialize(char *str);
char *lowcase(char *str);
char *capital(char *str);

char *ft_strcapitalize(char *str)
{
    int count;

    count = 0;
    while (str[count] != '\0')
    {
        lowcase(str);
        capital(str);
        break;

    }
    
}

char *lowcase(char *str)
{
    int n;

    n = 0;
    while (str[n] != '\0')
    {
        while(str[n] >= 'A' && str[n] <= 'Z')
        {
            str[n] = (str[n] + 32);
        }
        n++;
    }
    return str;
}

char *capital(char *str)
{
    int n;

    n = 0;
    while (str[n] != '\0')
    {
        if (str[n] >='a' && str[n] <= 'z')
        {
            str[n++] = (str[n] - 32);
            while (str[n] >= 'a' && str[n] < 'z')
            {
                n++;
                if (str[n] < 'a' || str[n] > 'z')
                {
                    break;
                }
            }
        }
        if (str[n] >= '0' && str[n] <= '9')
        {
            n++;
            while(str[++n] >='a' && str[n] <= 'z')
            {
                n++;
                if (str[n] < 'a' || str[n] > 'z')
                {
                    break;
                }
            }
        }
        n++;
    }
    return str;
}



int main()
{
    char *e;
    char arr[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    e = ft_strcapitalize(arr);
    printf("%s\n", e);
    return (0);
}