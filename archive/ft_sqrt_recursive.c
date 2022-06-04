#include <stdio.h>

int ft_sqrt(int nb);
long int goodenough(int guess, int n);
int newguess(int guess, int n);
int root(int guess, int n);

int ft_sqrt(int nb)
{
    printf("initial guess is %d\n", nb/2);
    return (root((nb / 2), nb));
}

int root(int guess, int n)
{
    int prevguess;
    if (!goodenough(guess, n))
    {
        printf("Found it!\n");
        return (guess);
    }
    else if (guess == 0)
    {
        printf("No possible solution / error\n");
        return 0;
    }
    else
    {
        printf("%d is not a good guess\n", guess);
        if (goodenough(guess, n) > 0)
        {
            printf("Found promising brute force initializer\n");
            prevguess = guess * 2;
            printf("Start brute force...\n");
            while (guess < prevguess)
            {
                guess++;
                printf("Test %d\n", guess);
                if (guess*guess == n)
                {
                    printf("Found it!\n");
                    return (guess);
                }
            }
            return (0);
        }
        return (root(newguess(guess, n), n));
    }
}

int newguess(int guess, int n)
{
    printf("\nnew guess is %d\n", (guess + (guess/n)) / 2);
    return ((guess + (guess / n)) / 2);
}
long int goodenough(int guess, int n)
{
    printf("checking if fulfilled cond...\n");
    printf("diff between guess and real = %d\n", n - (guess*guess));
    return(n - (guess * guess));
}

int main()
{
    int a;
    a = 961;
    printf("Square = %d\n", a);
    printf("Square root of %d is %d", a, ft_sqrt(a));
}