/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:18:30 by tlai-an           #+#    #+#             */
/*   Updated: 2022/05/31 17:34:10 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	n;

	n = -1;
	while (src[++n] != '\0')
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';
	return (dest);
}
