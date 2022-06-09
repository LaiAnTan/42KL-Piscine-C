/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:12:04 by tlai-an           #+#    #+#             */
/*   Updated: 2022/06/09 10:51:49 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	*dest;
	int	n;

	if (min >= max)
		return (0);
	dest = (int *) malloc((max - min) * sizeof(int));
	n = 0;
	while (min < max)
	{
		dest[n] = min++;
		n++;
	}
	return (dest);
}
