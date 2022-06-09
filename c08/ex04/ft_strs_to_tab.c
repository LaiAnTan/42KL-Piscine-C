/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:11:57 by tlai-an           #+#    #+#             */
/*   Updated: 2022/06/09 12:34:18 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
int					ft_strlen(char *str);
char				*ft_strdup(char *src);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					n;
	struct s_stock_str	*st;
	struct s_stock_str	*created;

	n = 0;
	st = malloc ((ac + 1) * sizeof(struct s_stock_str));
	if (st == 0)
		return (0);
	while (n < ac)
	{
		created = (t_stock_str *) malloc (sizeof(struct s_stock_str));
		if (created == 0)
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
	int		n;
	char	*dest;

	n = 0;
	dest = (char *) malloc(n * sizeof(char));
	if (dest == 0)
		return (0);
	while (src[n])
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
