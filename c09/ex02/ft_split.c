/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 23:11:27 by tlai-an           #+#    #+#             */
/*   Updated: 2022/06/09 23:11:29 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	total_words(char *str, char *charset)
{
	int	total;
	int	i;
	int	check_current;
	int	check_next;

	total = 0;
	i = 0;
	while (str[i] != '\0')
	{
		check_current = is_charset(str[i], charset);
		check_next = is_charset(str[i + 1], charset);
		if (check_current == 0 && check_next == 1)
			total++;
		i++;
	}
	return (total);
}

void	insert(char *dest, char *str, char *charset)
{
	int	i;

	i = 0;
	while (is_charset(str[i], charset) == 0)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
}

void	insert_word(char **result, char *str, char *charset)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (is_charset(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (is_charset(str[i + j], charset) == 0)
				j++;
			result[k] = (char *)malloc(sizeof(char) * (j + 1));
			insert(result[k], str + i, charset);
			i += j;
			k++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		words;

	words = total_words(str, charset);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	result[words] = 0;
	insert_word(result, str, charset);
	return (result);
}
