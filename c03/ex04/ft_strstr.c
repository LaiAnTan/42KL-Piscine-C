#include <stdio.h>
#include <string.h>

char    *ft_strstr(char *str, char *to_find);
int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

char    *ft_strstr(char *str, char *to_find)
{
    int n;
    int m;
    int same;
    int first;

    n = -1;
    m = 0;
    same = 0;
    first = 0;
    while(str[++n] != '\0' && to_find[m] != '\0')
    {
        if (str[n] == to_find[m])
        {
            if (m == 0) // store the location of the first element found
            {
                first = n;
            }
            same++;
            if (same == ft_strlen(to_find)) // to stop when whole substring has been found
            {
                break;
            }
            m++;
        }else // reset if nothing found
        {
            same = 0;
            first = 0;
            m = 0;
        }
        
    }
    if (same == ft_strlen(to_find)) // returns the pointer to the begining of the substring found
    {
        return(&str[first]);
    }
    return(NULL); // return null if no conditions are met
}

int main()
{
    char str1[6] = "hi";
    char str2[9]= "hi pizza";
    char *e;

    e = ft_strstr(str2, str1);
    printf("%s\n", e);
    return (0);
}