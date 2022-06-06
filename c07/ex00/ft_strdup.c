#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

char	*ft_strdup(char *src)
{
	int n;
	char *dest;

	n = 0;
	while (src[n] != '\0')
		++n;
	dest = (char*) malloc(n * sizeof(char));
	if (dest == 0)
		return (0);
	n = -1;
	while (src[++n] != '\0')
		dest[n] = src[n];
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