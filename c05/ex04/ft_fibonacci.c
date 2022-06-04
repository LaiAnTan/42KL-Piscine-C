#include <stdio.h>

int ft_fibonacci(int index);

int ft_fibonacci(int index)
{
	if(index <= 0)
		return (-1);
	if(index == 1)
		return (0);
	if(index == 2 || index == 3)
		return (1);
	return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main()
{
	int n;

	n = 0;
	while (++n < 25)
		printf("%d, ", ft_fibonacci(n));
	printf("%d", ft_fibonacci(n));
	return (0);
}