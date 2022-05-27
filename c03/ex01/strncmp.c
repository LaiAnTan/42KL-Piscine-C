#include <stdio.h>
#include <string.h>

int     ft_strncmp(char *s1, char *s2, int n);

int main()
{
    char str1[5] = "";
    char str2[5] = "aa";
    int val1;
    int val2;

    val1 = ft_strncmp(str2, str1, 4);
    val2 = strncmp(str2, str1, 4);
    printf("%d\n", val1);
    printf("%d\n", val2);

    return (0);
}

int ft_strncmp(char *s1, char *s2, int n)
{
    int x;
    int val;

    x = 0;
    while (x != n)
    {
        while(s1[x] != '\0' || s2[x] != '\0')
        {
            if (s1[x] != s2[x])
            {     
                if(s1[x] > s2[x])
                {
                    val = (s1[x] - s2[x]); 
                    return val;
                }
                else if(s1[x] < s2[x])
                {
                    val = (-(s2[x] - s1[x]));
                    return val;
                }
                val = 0;
                return val;
            }
            break;
        }
        x++;
    }
    return val;
}


