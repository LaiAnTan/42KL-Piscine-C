#include <stdio.h>
#include <string.h>

char    *ft_strncat(char *dest, char *src, int nb);

char    *ft_strncat(char *dest, char *src, int nb)
{
    int count1;
    int count2;

    count1 = 0;
    count2 = 0;
    while (count2 != nb)
    {
        while(dest[count1] != '\0')
        {
            count1++;
        }
        while(src[count2] != '\0')
        {
            if(dest[count1] == '\0')
            {
                if(count2 == nb)
                {
                    break;
                }
                dest[count1] = src[count2];
                count1++;
                count2++;
            }
        } 
    }
    dest[count1] = '\0';
    return dest;
}

int main()
{
    char str1[5] = "efgh";
    char str2[8]= "abcd";
    ft_strncat(str2, str1, 1);
    printf("%s\n", str2);
    return (0);
}