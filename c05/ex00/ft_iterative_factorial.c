#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int n;
	int val;

	n = 0;
	val = 1;
	while (++n <= nb)
		val *= n;
	return (val);

}

int main()
{
	printf("factorial result: %d\n", ft_iterative_factorial(5));
	return 0;
}