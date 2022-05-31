#include <stdio.h>

char	*ft_strcapitalize(char *str);

int main()
{
    char *e;
    char arr[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    e = ft_strcapitalize(arr);
    printf("%s\n", e);
    return (0);
}