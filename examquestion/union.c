#include <unistd.h>
#include <stdio.h>
void ft_union(char* str1, char* str2);

int main (int argc, char* argv[])
{
    if (argc != 3)
    {
        write(1, "\n", 1);
        return 0;
    }
    ft_union(argv[1], argv[2]);

}

void ft_union(char* str1, char* str2)
{
    int i= 0;
    int j= 0;
    //write out all argv and replaces the repetition character with -1 (so it doesnt get printed out)
    while (str1[i] != 0)
    {
        j = i + 1;
        while (str1[j] != 0)
        {
            if (str1[i] == str1[j])
            {
                str1[j] = -1;
            }
            j++;
        }
        if (str1[i] != -1)
            write(1, &str1[i], 1);
        i++;
    }

    i = 0;
    j = 0;
    int printme;
    while (str2[i] != 0)
    {
        // reset print
        printme = 1;
        // does the exact same shit as above
        j = i + 1;
        while (str2[j] != 0)
        {
            if (str2[i] == str2[j])
            {
                str2[j] = -1;
            }
            j++;
        }

        // checks for repeating word in the 2nd string
        j = 0;
        while (str1[j] != 0)
        {
            // if there is a repeating word, dont write it
            if (str2[i] == str1[j])
                printme = 0;
            j++;
        }

        if (printme == 1 && str2[i] != -1)
        {
            write(1, &str2[i], 1);
        }
        i++;
    }
}