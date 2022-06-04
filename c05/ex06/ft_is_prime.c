#include <stdio.h>

int	ft_is_prime(int nb);

int ft_is_prime(int nb)
{
	int n;

	n = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while(++n <= (nb / 2))
	{
		if(((nb % n) == 0))
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
	
	a = ft_is_prime(42);
	printf("%d\n", a);
	return (0);
}