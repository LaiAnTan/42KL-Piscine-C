#include <stdio.h>

int	ft_find_next_prime(int nb);
int isprime(int test);

int ft_find_next_prime(int nb)
{
	int nextprime;
	int bool;

	nextprime = nb;
	bool = 0;
	if (nb <= 1)
		return (2);
	while (bool == 0)
	{
		++nextprime;
		if (isprime(nextprime))
			bool = 1;
	}
	return (nextprime);
}

int isprime(int test)
{
	int n;

	n = 2;
	if (test == 0 || test == 1)
		return (0);
	while(++n <= (test / 2))
	{
		if(((test % n) == 0))
		{
			return (0);
			break;
		}
	}
	return (1);
}

int	main()
{
	int a;
	
	a = ft_find_next_prime(25);
	printf("%d\n", a);
	return (0);
}