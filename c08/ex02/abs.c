#include <stdio.h>
#include "ft_abs.h"

int	main()
{
	int a;
	int b;
	int c;
	int d;

	a = -10;
	b = 10;
	c = ABS(a);
	d = ABS(b);
	printf("abs of a: %d\n", c);
	printf("abs of b: %d\n", d);
	return (0);
}