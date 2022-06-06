#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*ret;
	int		i;

	i = 0;
	if (min >= max)
	{
		ret = NULL;
		return (0);
	}
	if (!(ret = malloc(sizeof(int) * (max - min))))
		return (-1);
	while (min < max)
	{
		ret[i] = min;
		i++;
		min++;
	}
	*range = ret;
	return (i);
}

int	main()
{
	int **a;
	int b;

	b = ft_ultimate_range(a, 8, 10);
	printf("%d\n", b);
	return (0);
}