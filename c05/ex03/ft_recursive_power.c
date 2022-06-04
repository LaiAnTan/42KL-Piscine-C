#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, (power - 1)));
}

int main()
{
	int a;
	int b;
	int c;

	a = 3;
	b = 3;
	c =  ft_recursive_power(a, b);
	printf("%d to the power of %d is %d\n", a, b, c);
	return 0;
}