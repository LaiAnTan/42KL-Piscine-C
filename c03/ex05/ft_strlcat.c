#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int count1;
    int count2;
    
    count1 = 0;
    count2 = 0;
    size = (size - 1);
    if (size < 0)
    {
        return count1;
    }
    if (size > 0)
    {
        while(dest[count1] != '\0')
        {
            count1++;
        }
        while(src[count2] != '\0')
        {
            if (dest[count1] == '\0')
            {
                dest[count1] = src[count2];
                count1++;
                count2++;
            }
        }
        dest[count1] = '\0';
        return count1;
    }

}

int main()
{
    char str1[5] = "efgh";
    char str2[8]= "abcd";
    int e;
    e = ft_strlcat(str2, str1, 6);
    ft_strlcat(str2, str1, 6);
    printf("%d\n", e);
    printf("%s\n", str2);

    return 0;
}