#include <stdio.h>
#include <stdlib.h>

char 	*ft_strjoin(int size, char **strs, char *sep);
int		ft_strlen(char *src);
char	*memalloc(int size, char **strs, char *sep);
char	*ft_strcat(char *dest, char *src);

char *ft_strjoin(int size, char **strs, char *sep)
{
	int	strcnt;
	int sepcnt;
	int boolean;
	char *dest;

	strcnt = 0;
	sepcnt = size - 1;
	boolean = 0;
	memalloc(size, strs, sep);
	while (size--)
	{
		if(boolean == 0)
		{
			ft_strcat(dest, strs[strcnt]);
			strcnt++;
			boolean = 1;
		}
		if (boolean == 1)
		{
			if (sepcnt--)
				ft_strcat(dest, sep);
			boolean = 0;
		}
	}
	return (dest);
}

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

char *memalloc(int size, char **strs, char *sep)
{
	int n;
	int tlen;
	char *dest;

	n = 0;
	tlen = 0;
	while(size--)
	{
		tlen += ft_strlen(strs[n]);
		n++;
	}
	size = n;
	tlen += (ft_strlen(sep) * (size - 1));
	if((dest = malloc(tlen * sizeof(char))) == 0)
		return (0);
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

int main()
{
	printf("\n");
	char *test[] = 
	{
		"segs",
		"seggs",
		"segggs",
		"sexxxxxxx",
	};
	char sep[] = " i love ";
	char *dest;
	int size;
	int total;

	size = 4;
	dest = ft_strjoin(size, test, sep);
	printf("%s\n", dest);
	return (0);
}