#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int *ft_range(int min, int max)
{
	int *dest;
	int n;

	if (min >= max)
		return (0);
	dest = (int *) malloc((max - min) * sizeof(int));
	n = 0;
	while(min < max)
	{
		dest[n] = min++;
		n++;
	}
	return (dest);
}

int	main()
{
	int *a;
	int num1;
	int num2;
	int n;

	num1 = 1;
	num2 = 10;
	n = -1;
	a = ft_range(num1, num2);
	printf("Range of %d and %d is", num1, num2);
	while (a[++n] != '\0')
		printf(" %d ", a[n]);
}