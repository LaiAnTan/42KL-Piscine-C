#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

char	*ft_strdup(char *src)
{
	int n;
	char *dest;

	n = 0;
	if((dest = (char*) malloc(n * sizeof(char))) == NULL)
		return (0);
	while (src[n])
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}

int	main()
{
	char a[] = "hello";
	char *b;
	char *c;

	b = strdup(a);
	c = ft_strdup(a);
	printf("source: %s\n", a);
	printf("system: %s\n", b);
	printf("my func: %s\n", c);
	return (0);
}