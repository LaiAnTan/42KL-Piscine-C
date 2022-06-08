#include <stdlib.h>
#include "ft_stock_str.h"
#include <stdio.h>

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
int	ft_strlen(char *str);
char	*ft_strdup(char *src);

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int n;
	struct s_stock_str	*st;
	struct s_stock_str	*created;
	
	n = 0;
	if (!(st = malloc ((ac + 1) * sizeof(struct s_stock_str))))
		return (0);
	while(n < ac)
	{
		if(!(created = (t_stock_str *)malloc(sizeof(struct s_stock_str))))
			return (0);
		st[n] = *created;
		st[n].size = ft_strlen(av[n]);
		st[n].str = av[n];
		st[n].copy = ft_strdup(av[n]);
		n++;
	}
	st[n] = (struct s_stock_str){0, 0, 0};
	return (st);
}

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char	*ft_strdup(char *src)
{
	int n;
	char *dest;

	n = 0;
	if((dest = (char*) malloc(ft_strlen(src) * sizeof(char))) == 0)
		return (0);
	while (src[n])
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}

int					main(void)
{
	int					index;
	int					ac;
	char				**av;
	struct s_stock_str	*structs;

	ac = 10;
	av = (char **)malloc((ac + 1) * sizeof(char *));
	index = 0;
	while (index < ac)
	{
		av[index] = (char *)malloc((2 + 1) * sizeof(char));
		av[index][0] = 'x';
		av[index][1] = (char)(index + 'a');
		av[index][2] = '\0';
		index++;
	}
	structs = ft_strs_to_tab(ac, av);
	index = 0;
	while (index < ac)
	{
		printf("%d\n", index);
		printf("\t| original : $%s$ @ %p\n", structs[index].str, structs[index].str);
		printf("\t|   copied : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
		printf("\t|     size : %d\n", structs[index].size);
		index++;
	}
}