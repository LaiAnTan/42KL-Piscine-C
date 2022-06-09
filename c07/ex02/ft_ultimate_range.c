/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:12:18 by tlai-an           #+#    #+#             */
/*   Updated: 2022/06/09 11:25:45 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*ret;
	int		i;

	i = 0;
	if (min >= max)
	{
		ret = 0;
		return (0);
	}
	ret = malloc(sizeof(int) * (max - min));
	if (ret == 0)
		return (0);
	while (min < max)
	{
		ret[i] = min;
		i++;
		min++;
	}
	*range = ret;
	return (i);
}
