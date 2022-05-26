#include <stdio.h>
#include <string.h>

int     ft_strcmp(char *s1, char *s2);

int ft_strcmp(char *s1, char *s2)
{
    int x;
    
    x = 0;
    while(s1[x] != '\0' || s2[x] != '\0')
    {
        if (s1[x] != s2[x])
        {     
            if(s1[x] > s2[x])
            {
                return (s1[x] - s2[x]); 
            }
            else if(s1[x] < s2[x])
            {
                return (-(s2[x] - s1[x]));
            }
            return 0;  
        }
        x++;
    }
}


int main()
{
    char str1[20] = "poggers";
    char str2[20] = "hi";
    int val1;
    int val2;

    val1 = ft_strcmp(str2, str1);
    val2 = strcmp(str2, str1);
    printf("%d\n", val1);
    printf("%d\n", val2);

    return (0);
}